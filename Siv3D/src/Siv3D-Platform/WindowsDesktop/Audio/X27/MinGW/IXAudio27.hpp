# pragma once
#ifdef __MINGW32__
# include <XAudio2.h>
namespace s3d
{
	using IXAudio2 = IXAudio27;
}
#endif
