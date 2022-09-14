#pragma once

#ifdef KS_PLATFORM_WINDOWS
	#ifdef KS_BUILD_DLL
		#define KISO_API __declspec(dllexport)
	#else
		#define	KISO_API __declspec(dllimport)
	#endif
#endif

#define BIT(x) (1 << x)