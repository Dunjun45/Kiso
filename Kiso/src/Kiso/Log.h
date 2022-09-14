#pragma once

#include <memory>
#include "Core.h"
#include "spdlog/spdlog.h"
#include "spdlog/fmt/ostr.h"

namespace Kiso {
	class KISO_API Log {
	public:
		static void Init();
		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }

	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};
}

#define KS_CORE_TRACE(...)    ::Kiso::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define KS_CORE_INFO(...)     ::Kiso::Log::GetCoreLogger()->info(__VA_ARGS__)
#define KS_CORE_WARN(...)     ::Kiso::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define KS_CORE_ERROR(...)    ::Kiso::Log::GetCoreLogger()->error(__VA_ARGS__)
#define KS_CORE_FATEL(...)    ::Kiso::Log::GetCoreLogger()->fatal(__VA_ARGS__)

// Client log macros
#define KS_TRACE(...)         ::Kiso::Log::GetClientLogger()->trace(__VA_ARGS__)
#define KS_INFO(...)          ::Kiso::Log::GetClientLogger()->info(__VA_ARGS__)
#define KS_WARN(...)          ::Kiso::Log::GetClientLogger()->warn(__VA_ARGS__)
#define KS_ERROR(...)         ::Kiso::Log::GetClientLogger()->error(__VA_ARGS__)
#define KS_FATEL(...)         ::Kiso::Log::GetClientLogger()->fatal(__VA_ARGS__)
