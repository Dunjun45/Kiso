#pragma once
#include "Core.h"

namespace Kiso {

	class KISO_API Application {

	public:
		Application();
		virtual ~Application();
		void Run();
	};

	// To be defined in CLIENT
	Application* CreateApplication();
}
