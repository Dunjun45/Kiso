#pragma once
#ifdef KS_PLATFORM_WINDOWS

extern Kiso::Application* Kiso::CreateApplication();

int main(int argc, char** argv) {

	Kiso::Log::Init();
	KS_CORE_WARN("Initialized Log!");
	auto app = Kiso::CreateApplication();
	app->Run();
	delete app;
	return 0;
}
#endif