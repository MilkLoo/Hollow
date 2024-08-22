#pragma once


#ifdef HOLLOW_PLATFORM_WINDOWS

extern Hollow::Application* Hollow::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Hollow::CreateApplication();
	app->Run();
	delete app;
}
#endif