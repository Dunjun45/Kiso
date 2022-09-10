#pragma once
#ifdef KS_PLATFORM_WINDOWS

extern Kiso::Application* Kiso::CreateApplication();

int main(int argc, char** argv) {
	auto app = Kiso::CreateApplication();
	app->Run();
	delete app;
	return 0;
}
#endif