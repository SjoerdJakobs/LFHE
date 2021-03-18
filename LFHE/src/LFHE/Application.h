#pragma once

#include "Core.h"

namespace LFHE
{
	class LFHE_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	//To be defined in CLIENT
	Application* CreateApplication();
}
