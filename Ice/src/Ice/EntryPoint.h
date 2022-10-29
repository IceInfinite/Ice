#ifndef ICE_ENTRYPOINT_H
#define ICE_ENTRYPOINT_H

#ifdef ICE_PLATFORM_WINDOWS

extern Ice::Application* Ice::CreateApplication();

int main() {
	auto app = Ice::CreateApplication();
	app->Run();
	delete app;
	return 0;
}

#endif // ICE_PLATFORM_WINDOWS

#endif // !ICE_ENTRYPOINT_H
