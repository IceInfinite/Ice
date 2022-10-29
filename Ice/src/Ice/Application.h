#ifndef ICE_APPLICATION_H
#define ICE_APPLICATION_H

#include "Core.h"

namespace Ice {
	class ICE_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();

	};

	Application* CreateApplication();

} // namespace Ice

#endif // ICE_APPLICATION_H