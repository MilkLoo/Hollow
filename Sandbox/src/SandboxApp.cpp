#include <Hollow.h>

class Sandbox : public Hollow::Application
{
public:
	Sandbox() {
		


	}

	~Sandbox() {



	}

};


Hollow::Application* Hollow::CreateApplication() 
{
	return new Sandbox();
}