#include <Kiso.h>

class Sandbox : public Kiso::Application {
	public:
		Sandbox() {
		}

		~Sandbox() {
		}
};

Kiso::Application* Kiso::CreateApplication() {
	return new Sandbox();
}