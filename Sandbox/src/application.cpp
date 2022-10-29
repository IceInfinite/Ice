#include <Ice.h>

class Sandbox : public Ice::Application
{
public:
	Sandbox() {}
	~Sandbox() override {}
};

Ice::Application* Ice::CreateApplication() {
	return new Sandbox();
}
