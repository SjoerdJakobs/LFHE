#pragma once
#include<memory>
#include "Core.h"
#include "spdlog/spdlog.h"
#include "spdlog/sinks/stdout_color_sinks.h"

namespace LFHE
{
	class LFHE_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }

	private:

		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};
}

#define LE_CORE_TRACE(...) ::LFHE::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define LE_CORE_INFO(...)  ::LFHE::Log::GetCoreLogger()->info(__VA_ARGS__)
#define LE_CORE_WARN(...)  ::LFHE::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define LE_CORE_ERROR(...) ::LFHE::Log::GetCoreLogger()->error(__VA_ARGS__)
#define LE_CORE_FATAL(...) ::LFHE::Log::GetCoreLogger()->fatal(__VA_ARGS__)

#define LE_TRACE(...)      ::LFHE::Log::GetClientLogger()->trace(__VA_ARGS__)
#define LE_INFO(...)       ::LFHE::Log::GetClientLogger()->info(__VA_ARGS__)
#define LE_WARN(...)       ::LFHE::Log::GetClientLogger()->warn(__VA_ARGS__)
#define LE_ERROR(...)      ::LFHE::Log::GetClientLogger()->error(__VA_ARGS__)
#define LE_FATAL(...)      ::LFHE::Log::GetClientLogger()->fatal(__VA_ARGS__)