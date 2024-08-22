#pragma once

#ifdef HOLLOW_PLATFORM_WINDOWS
	#ifdef HOLLOW_BUILD_DLL
		#define HOLLOW_API __declspec(dllexport)
	#else
		#define HOLLOW_API __declspec(dllimport)
	#endif
#else
	#error Hollow only support Windows!
#endif