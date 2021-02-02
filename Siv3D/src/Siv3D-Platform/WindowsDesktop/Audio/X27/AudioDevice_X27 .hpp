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

# pragma once
# include <Siv3D/Windows.hpp>
#ifdef __MINGW32__
# include <XAudio2.h>
# include <XAudio2fx.h>
# ifndef __out
# 	define __out
# endif
# ifndef __in
# 	define __in
# endif
# ifndef __inout
# 	define __inout
# endif
#else
# include <XAudio2_7/XAudio2.h>
# include <XAudio2_7/XAudio2fx.h>
#endif
# include <XAudio2_7/X3DAudio.h>
#ifdef __MINGW32__
# undef __out
# undef __in
# undef __inout
#endif

namespace s3d
{
	struct AudioDevice_X27
	{
		IXAudio2* xAudio2 = nullptr;

		XAUDIO2_DEVICE_DETAILS deviceDetails = {};

		IXAudio2MasteringVoice* masteringVoice = nullptr;

		IUnknown* pXAPO = nullptr;

		X3DAUDIO_HANDLE x3DInstance;

		void release()
		{
			if (pXAPO)
			{
				pXAPO->Release();
				pXAPO = nullptr;
			}

			if (masteringVoice)
			{
				masteringVoice->DestroyVoice();
				masteringVoice = nullptr;
			}

			if (xAudio2)
			{
				xAudio2->Release();
				xAudio2 = nullptr;
			}
		}
	};
}
