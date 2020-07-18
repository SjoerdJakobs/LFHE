#pragma once

namespace LFHE
{
	class _declspec(dllexport) Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	//To be defined in CLIENT
	Application* CreateApplication();
}
