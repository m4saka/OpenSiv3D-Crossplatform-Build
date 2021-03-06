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

# include "PixelShader_D3D11.hpp"

namespace s3d
{
	PixelShader_D3D11::PixelShader_D3D11(Null)
	{
		m_initialized = true;
	}

	PixelShader_D3D11::PixelShader_D3D11(ByteArray&& binary, ID3D11Device* const device)
		: m_binary(std::move(binary))
	{
		if (FAILED(device->CreatePixelShader(m_binary.data(), static_cast<size_t>(m_binary.size()), nullptr, &m_shader)))
		{
			return;
		}

		m_initialized = true;
	}

	ID3D11PixelShader* PixelShader_D3D11::getShader()
	{
		return m_shader.Get();
	}

	ByteArrayView PixelShader_D3D11::getView() const
	{
		return m_binary.view();
	}
}
