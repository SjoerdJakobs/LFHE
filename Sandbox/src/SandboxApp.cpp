#include <LFHE.h>

class Sandbox : public LFHE::Application
{
public:
	Sandbox();
	~Sandbox();

private:

};

Sandbox::Sandbox()
{
}

Sandbox::~Sandbox()
{
}

LFHE::Application* LFHE::CreateApplication()
{
	return new Sandbox();
}