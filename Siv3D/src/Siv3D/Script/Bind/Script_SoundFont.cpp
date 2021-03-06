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

# include <Siv3D/Script.hpp>
# include <Siv3D/SoundFont.hpp>
# include "ScriptBind.hpp"

namespace s3d
{
	using namespace AngelScript;

	void RegisterSoundFont(asIScriptEngine* engine)
	{
		int32 r = 0;

		r = engine->RegisterEnumValue("PianoKey", "C_1", PianoKey::C_1); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "CS_1", PianoKey::CS_1); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "DF_1", PianoKey::DF_1); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "D_1", PianoKey::D_1); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "DS_1", PianoKey::DS_1); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "EF_1", PianoKey::EF_1); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "E_1", PianoKey::E_1); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "FF_1", PianoKey::FF_1); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "F_1", PianoKey::F_1); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "ES_1", PianoKey::ES_1); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "FS_1", PianoKey::FS_1); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "GF_1", PianoKey::GF_1); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "G_1", PianoKey::G_1); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "GS_1", PianoKey::GS_1); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "AF_1", PianoKey::AF_1); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "A_1", PianoKey::A_1); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "AS_1", PianoKey::AS_1); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "BF_1", PianoKey::BF_1); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "B_1", PianoKey::B_1); assert(r >= 0);

		r = engine->RegisterEnumValue("PianoKey", "C0", PianoKey::C0); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "CS0", PianoKey::CS0); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "DF0", PianoKey::DF0); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "D0", PianoKey::D0); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "DS0", PianoKey::DS0); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "EF0", PianoKey::EF0); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "E0", PianoKey::E0); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "FF0", PianoKey::FF0); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "F0", PianoKey::F0); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "ES0", PianoKey::ES0); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "FS0", PianoKey::FS0); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "GF0", PianoKey::GF0); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "G0", PianoKey::G0); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "GS0", PianoKey::GS0); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "AF0", PianoKey::AF0); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "A0", PianoKey::A0); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "AS0", PianoKey::AS0); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "BF0", PianoKey::BF0); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "B0", PianoKey::B0); assert(r >= 0);

		r = engine->RegisterEnumValue("PianoKey", "C1", PianoKey::C1); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "CS1", PianoKey::CS1); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "DF1", PianoKey::DF1); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "D1", PianoKey::D1); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "DS1", PianoKey::DS1); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "EF1", PianoKey::EF1); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "E1", PianoKey::E1); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "FF1", PianoKey::FF1); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "F1", PianoKey::F1); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "ES1", PianoKey::ES1); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "FS1", PianoKey::FS1); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "GF1", PianoKey::GF1); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "G1", PianoKey::G1); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "GS1", PianoKey::GS1); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "AF1", PianoKey::AF1); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "A1", PianoKey::A1); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "AS1", PianoKey::AS1); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "BF1", PianoKey::BF1); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "B1", PianoKey::B1); assert(r >= 0);

		r = engine->RegisterEnumValue("PianoKey", "C2", PianoKey::C2); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "CS2", PianoKey::CS2); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "DF2", PianoKey::DF2); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "D2", PianoKey::D2); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "DS2", PianoKey::DS2); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "EF2", PianoKey::EF2); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "E2", PianoKey::E2); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "FF2", PianoKey::FF2); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "F2", PianoKey::F2); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "ES2", PianoKey::ES2); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "FS2", PianoKey::FS2); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "GF2", PianoKey::GF2); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "G2", PianoKey::G2); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "GS2", PianoKey::GS2); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "AF2", PianoKey::AF2); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "A2", PianoKey::A2); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "AS2", PianoKey::AS2); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "BF2", PianoKey::BF2); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "B2", PianoKey::B2); assert(r >= 0);

		r = engine->RegisterEnumValue("PianoKey", "C3", PianoKey::C3); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "CS3", PianoKey::CS3); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "DF3", PianoKey::DF3); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "D3", PianoKey::D3); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "DS3", PianoKey::DS3); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "EF3", PianoKey::EF3); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "E3", PianoKey::E3); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "FF3", PianoKey::FF3); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "F3", PianoKey::F3); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "ES3", PianoKey::ES3); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "FS3", PianoKey::FS3); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "GF3", PianoKey::GF3); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "G3", PianoKey::G3); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "GS3", PianoKey::GS3); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "AF3", PianoKey::AF3); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "A3", PianoKey::A3); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "AS3", PianoKey::AS3); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "BF3", PianoKey::BF3); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "B3", PianoKey::B3); assert(r >= 0);

		r = engine->RegisterEnumValue("PianoKey", "C4", PianoKey::C4); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "CS4", PianoKey::CS4); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "DF4", PianoKey::DF4); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "D4", PianoKey::D4); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "DS4", PianoKey::DS4); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "EF4", PianoKey::EF4); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "E4", PianoKey::E4); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "FF4", PianoKey::FF4); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "F4", PianoKey::F4); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "ES4", PianoKey::ES4); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "FS4", PianoKey::FS4); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "GF4", PianoKey::GF4); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "G4", PianoKey::G4); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "GS4", PianoKey::GS4); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "AF4", PianoKey::AF4); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "A4", PianoKey::A4); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "AS4", PianoKey::AS4); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "BF4", PianoKey::BF4); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "B4", PianoKey::B4); assert(r >= 0);

		r = engine->RegisterEnumValue("PianoKey", "C5", PianoKey::C5); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "CS5", PianoKey::CS5); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "DF5", PianoKey::DF5); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "D5", PianoKey::D5); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "DS5", PianoKey::DS5); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "EF5", PianoKey::EF5); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "E5", PianoKey::E5); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "FF5", PianoKey::FF5); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "F5", PianoKey::F5); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "ES5", PianoKey::ES5); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "FS5", PianoKey::FS5); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "GF5", PianoKey::GF5); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "G5", PianoKey::G5); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "GS5", PianoKey::GS5); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "AF5", PianoKey::AF5); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "A5", PianoKey::A5); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "AS5", PianoKey::AS5); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "BF5", PianoKey::BF5); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "B5", PianoKey::B5); assert(r >= 0);

		r = engine->RegisterEnumValue("PianoKey", "C6", PianoKey::C6); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "CS6", PianoKey::CS6); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "DF6", PianoKey::DF6); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "D6", PianoKey::D6); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "DS6", PianoKey::DS6); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "EF6", PianoKey::EF6); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "E6", PianoKey::E6); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "FF6", PianoKey::FF6); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "F6", PianoKey::F6); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "ES6", PianoKey::ES6); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "FS6", PianoKey::FS6); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "GF6", PianoKey::GF6); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "G6", PianoKey::G6); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "GS6", PianoKey::GS6); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "AF6", PianoKey::AF6); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "A6", PianoKey::A6); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "AS6", PianoKey::AS6); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "BF6", PianoKey::BF6); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "B6", PianoKey::B6); assert(r >= 0);

		r = engine->RegisterEnumValue("PianoKey", "C7", PianoKey::C7); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "CS7", PianoKey::CS7); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "DF7", PianoKey::DF7); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "D7", PianoKey::D7); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "DS7", PianoKey::DS7); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "EF7", PianoKey::EF7); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "E7", PianoKey::E7); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "FF7", PianoKey::FF7); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "F7", PianoKey::F7); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "ES7", PianoKey::ES7); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "FS7", PianoKey::FS7); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "GF7", PianoKey::GF7); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "G7", PianoKey::G7); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "GS7", PianoKey::GS7); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "AF7", PianoKey::AF7); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "A7", PianoKey::A7); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "AS7", PianoKey::AS7); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "BF7", PianoKey::BF7); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "B7", PianoKey::B7); assert(r >= 0);

		r = engine->RegisterEnumValue("PianoKey", "C8", PianoKey::C8); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "CS8", PianoKey::CS8); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "DF8", PianoKey::DF8); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "D8", PianoKey::D8); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "DS8", PianoKey::DS8); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "EF8", PianoKey::EF8); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "E8", PianoKey::E8); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "FF8", PianoKey::FF8); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "F8", PianoKey::F8); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "ES8", PianoKey::ES8); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "FS8", PianoKey::FS8); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "GF8", PianoKey::GF8); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "G8", PianoKey::G8); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "GS8", PianoKey::GS8); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "AF8", PianoKey::AF8); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "A8", PianoKey::A8); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "AS8", PianoKey::AS8); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "BF8", PianoKey::BF8); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "B8", PianoKey::B8); assert(r >= 0);

		r = engine->RegisterEnumValue("PianoKey", "C9", PianoKey::C9); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "CS9", PianoKey::CS9); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "DF9", PianoKey::DF9); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "D9", PianoKey::D9); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "DS9", PianoKey::DS9); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "EF9", PianoKey::EF9); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "E9", PianoKey::E9); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "FF9", PianoKey::FF9); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "F9", PianoKey::F9); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "ES9", PianoKey::ES9); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "FS9", PianoKey::FS9); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "GF9", PianoKey::GF9); assert(r >= 0);
		r = engine->RegisterEnumValue("PianoKey", "G9", PianoKey::G9); assert(r >= 0);


		r = engine->RegisterEnumValue("GMInstrument", "Piano1", static_cast<uint8>(GMInstrument::Piano1)); assert(r >= 0);
		r = engine->RegisterEnumValue("GMInstrument", "Piano2", static_cast<uint8>(GMInstrument::Piano2)); assert(r >= 0);
		r = engine->RegisterEnumValue("GMInstrument", "Piano3", static_cast<uint8>(GMInstrument::Piano3)); assert(r >= 0);
		r = engine->RegisterEnumValue("GMInstrument", "Piano4", static_cast<uint8>(GMInstrument::Piano4)); assert(r >= 0);
		r = engine->RegisterEnumValue("GMInstrument", "ElectricPiano1", static_cast<uint8>(GMInstrument::ElectricPiano1)); assert(r >= 0);
		r = engine->RegisterEnumValue("GMInstrument", "ElectricPiano2", static_cast<uint8>(GMInstrument::ElectricPiano2)); assert(r >= 0);
		r = engine->RegisterEnumValue("GMInstrument", "Harpsichord", static_cast<uint8>(GMInstrument::Harpsichord)); assert(r >= 0);
		r = engine->RegisterEnumValue("GMInstrument", "Clavinet", static_cast<uint8>(GMInstrument::Clavinet)); assert(r >= 0);
		r = engine->RegisterEnumValue("GMInstrument", "Celesta", static_cast<uint8>(GMInstrument::Celesta)); assert(r >= 0);
		r = engine->RegisterEnumValue("GMInstrument", "Glockenspiel", static_cast<uint8>(GMInstrument::Glockenspiel)); assert(r >= 0);
		r = engine->RegisterEnumValue("GMInstrument", "MusicBox", static_cast<uint8>(GMInstrument::MusicBox)); assert(r >= 0);
		r = engine->RegisterEnumValue("GMInstrument", "Vibraphone", static_cast<uint8>(GMInstrument::Vibraphone)); assert(r >= 0);
		r = engine->RegisterEnumValue("GMInstrument", "Marimba", static_cast<uint8>(GMInstrument::Marimba)); assert(r >= 0);
		r = engine->RegisterEnumValue("GMInstrument", "Xylophone", static_cast<uint8>(GMInstrument::Xylophone)); assert(r >= 0);
		r = engine->RegisterEnumValue("GMInstrument", "TubularBells", static_cast<uint8>(GMInstrument::TubularBells)); assert(r >= 0);
		r = engine->RegisterEnumValue("GMInstrument", "Dulcimer", static_cast<uint8>(GMInstrument::Dulcimer)); assert(r >= 0);
		r = engine->RegisterEnumValue("GMInstrument", "DrawbarOrgan", static_cast<uint8>(GMInstrument::DrawbarOrgan)); assert(r >= 0);
		r = engine->RegisterEnumValue("GMInstrument", "PercussiveOrgan", static_cast<uint8>(GMInstrument::PercussiveOrgan)); assert(r >= 0);
		r = engine->RegisterEnumValue("GMInstrument", "RockOrgan", static_cast<uint8>(GMInstrument::RockOrgan)); assert(r >= 0);
		r = engine->RegisterEnumValue("GMInstrument", "ChurchOrgan", static_cast<uint8>(GMInstrument::ChurchOrgan)); assert(r >= 0);
		r = engine->RegisterEnumValue("GMInstrument", "ReedOrgan", static_cast<uint8>(GMInstrument::ReedOrgan)); assert(r >= 0);
		r = engine->RegisterEnumValue("GMInstrument", "Accordion", static_cast<uint8>(GMInstrument::Accordion)); assert(r >= 0);
		r = engine->RegisterEnumValue("GMInstrument", "Harmonica", static_cast<uint8>(GMInstrument::Harmonica)); assert(r >= 0);
		r = engine->RegisterEnumValue("GMInstrument", "TangoAccordion", static_cast<uint8>(GMInstrument::TangoAccordion)); assert(r >= 0);
		r = engine->RegisterEnumValue("GMInstrument", "NylonGuitar", static_cast<uint8>(GMInstrument::NylonGuitar)); assert(r >= 0);
		r = engine->RegisterEnumValue("GMInstrument", "SteelGuitar", static_cast<uint8>(GMInstrument::SteelGuitar)); assert(r >= 0);
		r = engine->RegisterEnumValue("GMInstrument", "JazzGuitar", static_cast<uint8>(GMInstrument::JazzGuitar)); assert(r >= 0);
		r = engine->RegisterEnumValue("GMInstrument", "CleanGuitar", static_cast<uint8>(GMInstrument::CleanGuitar)); assert(r >= 0);
		r = engine->RegisterEnumValue("GMInstrument", "PianMutedGuitaro1", static_cast<uint8>(GMInstrument::MutedGuitar)); assert(r >= 0);
		r = engine->RegisterEnumValue("GMInstrument", "OverdrivenGuitar", static_cast<uint8>(GMInstrument::OverdrivenGuitar)); assert(r >= 0);
		r = engine->RegisterEnumValue("GMInstrument", "DistortionGuitar", static_cast<uint8>(GMInstrument::DistortionGuitar)); assert(r >= 0);
		r = engine->RegisterEnumValue("GMInstrument", "GuitarHarmonics", static_cast<uint8>(GMInstrument::GuitarHarmonics)); assert(r >= 0);
		r = engine->RegisterEnumValue("GMInstrument", "AcousticBass", static_cast<uint8>(GMInstrument::AcousticBass)); assert(r >= 0);
		r = engine->RegisterEnumValue("GMInstrument", "FingeredBass", static_cast<uint8>(GMInstrument::FingeredBass)); assert(r >= 0);
		r = engine->RegisterEnumValue("GMInstrument", "PickedBass", static_cast<uint8>(GMInstrument::PickedBass)); assert(r >= 0);
		r = engine->RegisterEnumValue("GMInstrument", "FretlessBass", static_cast<uint8>(GMInstrument::FretlessBass)); assert(r >= 0);
		r = engine->RegisterEnumValue("GMInstrument", "SlapBass1", static_cast<uint8>(GMInstrument::SlapBass1)); assert(r >= 0);
		r = engine->RegisterEnumValue("GMInstrument", "SlapBass2", static_cast<uint8>(GMInstrument::SlapBass2)); assert(r >= 0);
		r = engine->RegisterEnumValue("GMInstrument", "SynthBass1", static_cast<uint8>(GMInstrument::SynthBass1)); assert(r >= 0);
		r = engine->RegisterEnumValue("GMInstrument", "SynthBass2", static_cast<uint8>(GMInstrument::SynthBass2)); assert(r >= 0);
		r = engine->RegisterEnumValue("GMInstrument", "Violin", static_cast<uint8>(GMInstrument::Violin)); assert(r >= 0);
		r = engine->RegisterEnumValue("GMInstrument", "Viola", static_cast<uint8>(GMInstrument::Viola)); assert(r >= 0);
		r = engine->RegisterEnumValue("GMInstrument", "Cello", static_cast<uint8>(GMInstrument::Cello)); assert(r >= 0);
		r = engine->RegisterEnumValue("GMInstrument", "Contrabass", static_cast<uint8>(GMInstrument::Contrabass)); assert(r >= 0);
		r = engine->RegisterEnumValue("GMInstrument", "TremoloStrings", static_cast<uint8>(GMInstrument::TremoloStrings)); assert(r >= 0);
		r = engine->RegisterEnumValue("GMInstrument", "PizzicatoStrings", static_cast<uint8>(GMInstrument::PizzicatoStrings)); assert(r >= 0);
		r = engine->RegisterEnumValue("GMInstrument", "OrchestralHarp", static_cast<uint8>(GMInstrument::OrchestralHarp)); assert(r >= 0);
		r = engine->RegisterEnumValue("GMInstrument", "Timpani", static_cast<uint8>(GMInstrument::Timpani)); assert(r >= 0);
		r = engine->RegisterEnumValue("GMInstrument", "StringEnsemble1", static_cast<uint8>(GMInstrument::StringEnsemble1)); assert(r >= 0);
		r = engine->RegisterEnumValue("GMInstrument", "StringEnsemble2", static_cast<uint8>(GMInstrument::StringEnsemble2)); assert(r >= 0);
		r = engine->RegisterEnumValue("GMInstrument", "SynthStrings1", static_cast<uint8>(GMInstrument::SynthStrings1)); assert(r >= 0);
		r = engine->RegisterEnumValue("GMInstrument", "SynthStrings2", static_cast<uint8>(GMInstrument::SynthStrings2)); assert(r >= 0);
		r = engine->RegisterEnumValue("GMInstrument", "ChoirAahs", static_cast<uint8>(GMInstrument::ChoirAahs)); assert(r >= 0);
		r = engine->RegisterEnumValue("GMInstrument", "VoiceOohs", static_cast<uint8>(GMInstrument::VoiceOohs)); assert(r >= 0);
		r = engine->RegisterEnumValue("GMInstrument", "SynthChoir", static_cast<uint8>(GMInstrument::SynthChoir)); assert(r >= 0);
		r = engine->RegisterEnumValue("GMInstrument", "OrchestraHit", static_cast<uint8>(GMInstrument::OrchestraHit)); assert(r >= 0);
		r = engine->RegisterEnumValue("GMInstrument", "Trumpet", static_cast<uint8>(GMInstrument::Trumpet)); assert(r >= 0);
		r = engine->RegisterEnumValue("GMInstrument", "Trombone", static_cast<uint8>(GMInstrument::Trombone)); assert(r >= 0);
		r = engine->RegisterEnumValue("GMInstrument", "Tuba", static_cast<uint8>(GMInstrument::Tuba)); assert(r >= 0);
		r = engine->RegisterEnumValue("GMInstrument", "MutedTrumpet", static_cast<uint8>(GMInstrument::MutedTrumpet)); assert(r >= 0);
		r = engine->RegisterEnumValue("GMInstrument", "FrenchHorn", static_cast<uint8>(GMInstrument::FrenchHorn)); assert(r >= 0);
		r = engine->RegisterEnumValue("GMInstrument", "BrassSection", static_cast<uint8>(GMInstrument::BrassSection)); assert(r >= 0);
		r = engine->RegisterEnumValue("GMInstrument", "SynthBrass1", static_cast<uint8>(GMInstrument::SynthBrass1)); assert(r >= 0);
		r = engine->RegisterEnumValue("GMInstrument", "SynthBrass2", static_cast<uint8>(GMInstrument::SynthBrass2)); assert(r >= 0);
		r = engine->RegisterEnumValue("GMInstrument", "SopranoSax", static_cast<uint8>(GMInstrument::SopranoSax)); assert(r >= 0);
		r = engine->RegisterEnumValue("GMInstrument", "AltoSax", static_cast<uint8>(GMInstrument::AltoSax)); assert(r >= 0);
		r = engine->RegisterEnumValue("GMInstrument", "TenorSax", static_cast<uint8>(GMInstrument::TenorSax)); assert(r >= 0);
		r = engine->RegisterEnumValue("GMInstrument", "BaritoneSax", static_cast<uint8>(GMInstrument::BaritoneSax)); assert(r >= 0);
		r = engine->RegisterEnumValue("GMInstrument", "Oboe", static_cast<uint8>(GMInstrument::Oboe)); assert(r >= 0);
		r = engine->RegisterEnumValue("GMInstrument", "EnglishHorn", static_cast<uint8>(GMInstrument::EnglishHorn)); assert(r >= 0);
		r = engine->RegisterEnumValue("GMInstrument", "Bassoon", static_cast<uint8>(GMInstrument::Bassoon)); assert(r >= 0);
		r = engine->RegisterEnumValue("GMInstrument", "Clarinet", static_cast<uint8>(GMInstrument::Clarinet)); assert(r >= 0);
		r = engine->RegisterEnumValue("GMInstrument", "Piccolo", static_cast<uint8>(GMInstrument::Piccolo)); assert(r >= 0);
		r = engine->RegisterEnumValue("GMInstrument", "Flute", static_cast<uint8>(GMInstrument::Flute)); assert(r >= 0);
		r = engine->RegisterEnumValue("GMInstrument", "Recorder", static_cast<uint8>(GMInstrument::Recorder)); assert(r >= 0);
		r = engine->RegisterEnumValue("GMInstrument", "PanFlute", static_cast<uint8>(GMInstrument::PanFlute)); assert(r >= 0);
		r = engine->RegisterEnumValue("GMInstrument", "Blownbottle", static_cast<uint8>(GMInstrument::Blownbottle)); assert(r >= 0);
		r = engine->RegisterEnumValue("GMInstrument", "Shakuhachi", static_cast<uint8>(GMInstrument::Shakuhachi)); assert(r >= 0);
		r = engine->RegisterEnumValue("GMInstrument", "Whistle", static_cast<uint8>(GMInstrument::Whistle)); assert(r >= 0);
		r = engine->RegisterEnumValue("GMInstrument", "PiaOcarinano1", static_cast<uint8>(GMInstrument::Ocarina)); assert(r >= 0);
		r = engine->RegisterEnumValue("GMInstrument", "SquareWave", static_cast<uint8>(GMInstrument::SquareWave)); assert(r >= 0);
		r = engine->RegisterEnumValue("GMInstrument", "SawWave", static_cast<uint8>(GMInstrument::SawWave)); assert(r >= 0);
		r = engine->RegisterEnumValue("GMInstrument", "SynCalliope", static_cast<uint8>(GMInstrument::SynCalliope)); assert(r >= 0);
		r = engine->RegisterEnumValue("GMInstrument", "ChifferLead", static_cast<uint8>(GMInstrument::ChifferLead)); assert(r >= 0);
		r = engine->RegisterEnumValue("GMInstrument", "Charang", static_cast<uint8>(GMInstrument::Charang)); assert(r >= 0);
		r = engine->RegisterEnumValue("GMInstrument", "SoloVox", static_cast<uint8>(GMInstrument::SoloVox)); assert(r >= 0);
		r = engine->RegisterEnumValue("GMInstrument", "FifthSawWave", static_cast<uint8>(GMInstrument::FifthSawWave)); assert(r >= 0);
		r = engine->RegisterEnumValue("GMInstrument", "BassAndLead", static_cast<uint8>(GMInstrument::BassAndLead)); assert(r >= 0);
		r = engine->RegisterEnumValue("GMInstrument", "Fantasia", static_cast<uint8>(GMInstrument::Fantasia)); assert(r >= 0);
		r = engine->RegisterEnumValue("GMInstrument", "WarmPad", static_cast<uint8>(GMInstrument::WarmPad)); assert(r >= 0);
		r = engine->RegisterEnumValue("GMInstrument", "Polysynth", static_cast<uint8>(GMInstrument::Polysynth)); assert(r >= 0);
		r = engine->RegisterEnumValue("GMInstrument", "SpaceVoice", static_cast<uint8>(GMInstrument::SpaceVoice)); assert(r >= 0);
		r = engine->RegisterEnumValue("GMInstrument", "BowedGlass", static_cast<uint8>(GMInstrument::BowedGlass)); assert(r >= 0);
		r = engine->RegisterEnumValue("GMInstrument", "MetalPad", static_cast<uint8>(GMInstrument::MetalPad)); assert(r >= 0);
		r = engine->RegisterEnumValue("GMInstrument", "HaloPad", static_cast<uint8>(GMInstrument::HaloPad)); assert(r >= 0);
		r = engine->RegisterEnumValue("GMInstrument", "SweepPad", static_cast<uint8>(GMInstrument::SweepPad)); assert(r >= 0);
		r = engine->RegisterEnumValue("GMInstrument", "IceRain", static_cast<uint8>(GMInstrument::IceRain)); assert(r >= 0);
		r = engine->RegisterEnumValue("GMInstrument", "Soundtrack", static_cast<uint8>(GMInstrument::Soundtrack)); assert(r >= 0);
		r = engine->RegisterEnumValue("GMInstrument", "Crystal", static_cast<uint8>(GMInstrument::Crystal)); assert(r >= 0);
		r = engine->RegisterEnumValue("GMInstrument", "Atmosphere", static_cast<uint8>(GMInstrument::Atmosphere)); assert(r >= 0);
		r = engine->RegisterEnumValue("GMInstrument", "Brightness", static_cast<uint8>(GMInstrument::Brightness)); assert(r >= 0);
		r = engine->RegisterEnumValue("GMInstrument", "Goblin", static_cast<uint8>(GMInstrument::Goblin)); assert(r >= 0);
		r = engine->RegisterEnumValue("GMInstrument", "EchoDrops", static_cast<uint8>(GMInstrument::EchoDrops)); assert(r >= 0);
		r = engine->RegisterEnumValue("GMInstrument", "StarTheme", static_cast<uint8>(GMInstrument::StarTheme)); assert(r >= 0);
		r = engine->RegisterEnumValue("GMInstrument", "Sitar", static_cast<uint8>(GMInstrument::Sitar)); assert(r >= 0);
		r = engine->RegisterEnumValue("GMInstrument", "Banjo", static_cast<uint8>(GMInstrument::Banjo)); assert(r >= 0);
		r = engine->RegisterEnumValue("GMInstrument", "Shamisen", static_cast<uint8>(GMInstrument::Shamisen)); assert(r >= 0);
		r = engine->RegisterEnumValue("GMInstrument", "Koto", static_cast<uint8>(GMInstrument::Koto)); assert(r >= 0);
		r = engine->RegisterEnumValue("GMInstrument", "Kalimba", static_cast<uint8>(GMInstrument::Kalimba)); assert(r >= 0);
		r = engine->RegisterEnumValue("GMInstrument", "Bagpipe", static_cast<uint8>(GMInstrument::Bagpipe)); assert(r >= 0);
		r = engine->RegisterEnumValue("GMInstrument", "Fiddle", static_cast<uint8>(GMInstrument::Fiddle)); assert(r >= 0);
		r = engine->RegisterEnumValue("GMInstrument", "Shanai", static_cast<uint8>(GMInstrument::Shanai)); assert(r >= 0);
		r = engine->RegisterEnumValue("GMInstrument", "TinkleBell", static_cast<uint8>(GMInstrument::TinkleBell)); assert(r >= 0);
		r = engine->RegisterEnumValue("GMInstrument", "Agogo", static_cast<uint8>(GMInstrument::Agogo)); assert(r >= 0);
		r = engine->RegisterEnumValue("GMInstrument", "SteelDrums", static_cast<uint8>(GMInstrument::SteelDrums)); assert(r >= 0);
		r = engine->RegisterEnumValue("GMInstrument", "Woodblock", static_cast<uint8>(GMInstrument::Woodblock)); assert(r >= 0);
		r = engine->RegisterEnumValue("GMInstrument", "TaikoDrum", static_cast<uint8>(GMInstrument::TaikoDrum)); assert(r >= 0);
		r = engine->RegisterEnumValue("GMInstrument", "MelodicTom", static_cast<uint8>(GMInstrument::MelodicTom)); assert(r >= 0);
		r = engine->RegisterEnumValue("GMInstrument", "SynthDrum", static_cast<uint8>(GMInstrument::SynthDrum)); assert(r >= 0);
		r = engine->RegisterEnumValue("GMInstrument", "ReverseCymbal", static_cast<uint8>(GMInstrument::ReverseCymbal)); assert(r >= 0);
		r = engine->RegisterEnumValue("GMInstrument", "GuitarFretNoise", static_cast<uint8>(GMInstrument::GuitarFretNoise)); assert(r >= 0);
		r = engine->RegisterEnumValue("GMInstrument", "BreathNoise", static_cast<uint8>(GMInstrument::BreathNoise)); assert(r >= 0);
		r = engine->RegisterEnumValue("GMInstrument", "Seashore", static_cast<uint8>(GMInstrument::Seashore)); assert(r >= 0);
		r = engine->RegisterEnumValue("GMInstrument", "BirdTweet", static_cast<uint8>(GMInstrument::BirdTweet)); assert(r >= 0);
		r = engine->RegisterEnumValue("GMInstrument", "TelephoneRing", static_cast<uint8>(GMInstrument::TelephoneRing)); assert(r >= 0);
		r = engine->RegisterEnumValue("GMInstrument", "Helicopter", static_cast<uint8>(GMInstrument::Helicopter)); assert(r >= 0);
		r = engine->RegisterEnumValue("GMInstrument", "Applause", static_cast<uint8>(GMInstrument::Applause)); assert(r >= 0);
		r = engine->RegisterEnumValue("GMInstrument", "Gunshot", static_cast<uint8>(GMInstrument::Gunshot)); assert(r >= 0);
	}
}
