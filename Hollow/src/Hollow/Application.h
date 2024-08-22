#pragma once
#include "Core.h"
namespace Hollow
{

	class HOLLOW_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	Application* CreateApplication();

}
