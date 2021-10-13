//
// Created by BlackFlage on 29.09.2021.
//

#include "Logger.h"
#include "spdlog/sinks/stdout_color_sinks.h"
#include "Macro.h"

namespace ctm
{
    std::shared_ptr<spdlog::logger> Logger::s_core_logger;
    bool Logger::s_initialized = false;

    void ctm::Logger::initialize()
    {
        CTM_ASSERT(!s_initialized, "Logger already initialized!");

        spdlog::set_pattern("%^[%T] %n: %v%$");

        s_core_logger = spdlog::stdout_color_mt("LOGGER");
        s_initialized = true;

        CTM_CORE_INFO("Logger created successfully!.");
    }
}