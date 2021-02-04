//-----------------------------------------------
//
//	This file is part of the Siv3D Engine.
//
//	Copyright (c) 2008-2019 Ryo Suzuki
//	Copyright (c) 2016-2019 OpenSiv3D Project
//
//	Licensed under the MIT License.
//
//-----------------------------------------------

# include <Siv3D/PowerStatus.hpp>
# include <Siv3D/Windows.hpp>
#ifndef SYSTEM_STATUS_FLAG_POWER_SAVING_ON
# define SYSTEM_STATUS_FLAG_POWER_SAVING_ON  0x01
#endif
namespace s3d
{
	namespace System
	{
		namespace detail {
			struct HasSystemStatusFlagImpl
			{
				template <class T>
				static std::true_type check(decltype(T::SystemStatusFlag)*);
				template <class T>
				static std::false_type check(...);
			};
			template <class T>
			struct HasSystemStatusFlag : public decltype(HasSystemStatusFlagImpl::check<T>(nullptr)) {};
			template<typename Target = SYSTEM_POWER_STATUS>
			DWORD GetSystemStatusFlagImpl(const Target& s) noexcept
			{
				if constexpr (HasSystemStatusFlag<SYSTEM_POWER_STATUS>::value) {
					return s.SystemStatusFlag;
				}
				else {
					return s.Reserved1;
				}
			}
			inline DWORD GetSystemStatusFlag(const SYSTEM_POWER_STATUS& s) noexcept  { return GetSystemStatusFlagImpl(s); }
		}
		PowerStatus GetPowerStatus()
		{
			SYSTEM_POWER_STATUS s;

			PowerStatus status;

			if (!::GetSystemPowerStatus(&s))
			{
				return status;
			}

			status.ac = (s.ACLineStatus == AC_LINE_ONLINE) ? ACLineStatus::Online
				: (s.ACLineStatus == AC_LINE_OFFLINE) ? ACLineStatus::Offline : ACLineStatus::Unknown;

			status.battery = (s.BatteryFlag & BATTERY_FLAG_HIGH) ? BatteryStatus::High
				: (s.BatteryFlag & BATTERY_FLAG_LOW) ? BatteryStatus::Low
				: (s.BatteryFlag & BATTERY_FLAG_CRITICAL) ? BatteryStatus::Critical
				: (s.BatteryFlag & BATTERY_FLAG_NO_BATTERY) ? BatteryStatus::NoBattery
				: (s.BatteryFlag & BATTERY_FLAG_UNKNOWN) ? BatteryStatus::Unknown
				: BatteryStatus::Middle;

			status.charging = !!(s.BatteryFlag & BATTERY_FLAG_CHARGING);
			status.batterySaver = !!(s3d::System::detail::GetSystemStatusFlag(s) & SYSTEM_STATUS_FLAG_POWER_SAVING_ON);

			if (s.BatteryLifePercent != BATTERY_PERCENTAGE_UNKNOWN)
			{
				status.batteryLifePercent = s.BatteryLifePercent;
			}

			if (s.BatteryLifeTime != BATTERY_LIFE_UNKNOWN)
			{
				status.batteryLifeTimeSec = s.BatteryLifeTime;
			}

			if (s.BatteryFullLifeTime != BATTERY_LIFE_UNKNOWN)
			{
				status.batteryTimeToFullChargeSec = s.BatteryFullLifeTime;
			}

			return status;
		}
	}
}
