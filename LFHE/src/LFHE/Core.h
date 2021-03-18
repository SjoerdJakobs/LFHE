#pragma once

#ifdef LE_PLATFORM_WINDOWS
	#ifdef LE_BUILD_DLL
		#define LFHE_API _declspec(dllexport)
	#else
		#define LFHE_API _declspec(dllimport)		
	#endif // LE_BUILD_DLL
#else
	#error LFHE only supports Windows.
#endif // LE_PLATFORM_WINDOWS

#define BIT(x)(1 << x)