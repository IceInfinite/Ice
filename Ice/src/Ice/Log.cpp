#include "Log.h"
#include "spdlog/sinks/stdout_color_sinks.h"

namespace Ice {

	std::shared_ptr<spdlog::logger> Log::s_coreLogger = nullptr;
	std::shared_ptr<spdlog::logger> Log::s_clientLogger = nullptr;

	void Log::Init() {
		spdlog::set_pattern("%^[%T] %n: %v%$");
		s_coreLogger = spdlog::stdout_color_mt("ICE");
		s_coreLogger->set_level(spdlog::level::trace);
		s_clientLogger = spdlog::stdout_color_mt("APP");
		s_clientLogger->set_level(spdlog::level::trace);

	}

	std::shared_ptr<spdlog::logger>& Log::GetCoreLogger() {
		return s_coreLogger;
	}

	std::shared_ptr<spdlog::logger>& Log::GetClientLogger() {
		return s_clientLogger;
	}

} // namespace Ice
