#pragma once

#ifdef LE_PLATFORM_WINDOWS

extern LFHE::Application* LFHE::CreateApplication();

int main(int argc, char** argv)
{
	LFHE::Log::Init();
	LE_CORE_WARN("initialized core logger");
	LE_INFO("initialized client logger");

	auto app = LFHE::CreateApplication();
	app->Run();
	delete app;
}
#endif // HZ_PLATFORM_WINDOWS

