#include "Application.h"
#include "Kiso/Events/ApplicationEvent.h"
#include "Kiso/Log.h"

namespace Kiso {
	Application::Application() {
	}

	Application::~Application() {
	}

	void Application::Run() {
		WindowResizeEvent e(1024, 760);
		if (e.IsInCategory(EventCategoryApplication)) {
			KS_TRACE(e);
		}

		if (e.IsInCategory(EventCategoryInput)) {
			KS_TRACE(e);
		}
		while (true);
	}
}