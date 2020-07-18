#pragma once

#ifdef LE_PLATFORM_WINDOWS
	#ifdef LE_BUILD_DLL
		#define LFHE_API _declspec(dllexport)
	#else
		#define LFHE_API _declspec(dllexport)		
	#endif // LE_BUILD_DLL
#else
	#error LFHE only supports Windows.
#endif // HZ_PLATFORM_WINDOWS
