#pragma once

#ifdef LE_PLATFORM_WINDOWS

extern LFHE::Application* LFHE::CreateApplication();

int main(int argc, char** argv)
{
	auto app = LFHE::CreateApplication();
	app->Run();
	delete app;
}
#endif // HZ_PLATFORM_WINDOWS

