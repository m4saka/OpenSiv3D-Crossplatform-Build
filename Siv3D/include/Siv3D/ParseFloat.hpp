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
# include "Fwd.hpp"

namespace s3d
{
	template <class FloatType>
	FloatType ParseFloat(StringView view);

	template <>
	float ParseFloat<float>(StringView view);

	template <>
	double ParseFloat<double>(StringView view);

	template <>
	long double ParseFloat<long double>(StringView view);


	template <class FloatType>
	Optional<FloatType> ParseFloatOpt(StringView view);

	template <>
	Optional<float> ParseFloatOpt<float>(StringView view);

	template <>
	Optional<double> ParseFloatOpt<double>(StringView view);

	template <>
	Optional<long double> ParseFloatOpt<long double>(StringView view);
}
