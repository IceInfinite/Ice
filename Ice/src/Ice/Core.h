#ifndef ICE_CORE_H
#define ICE_CORE_H

#ifdef ICE_PLATFORM_WINDOWS
	#ifdef ICE_BUILD_DLL
		#define ICE_API __declspec(dllexport)
	#else
		#define ICE_API __declspec(dllimport)
	#endif // ICE_BUILD_DLL
#else
	#error Ice only support windows!
#endif // ICE_PLATFORM_WINDOWS

#endif // ICE_CORE_H
