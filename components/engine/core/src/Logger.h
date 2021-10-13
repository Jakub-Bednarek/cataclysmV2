//
// Created by BlackFlage on 29.09.2021.
//

#ifndef CATACLYSM_LOGGER_H
#define CATACLYSM_LOGGER_H

#include <memory>
#include "spdlog/spdlog.h"

namespace ctm
{
    class Logger
    {
    public:
        static void initialize();

        static std::shared_ptr<spdlog::logger> get_core_logger() { return s_core_logger; }
    private:
        static std::shared_ptr<spdlog::logger> s_core_logger;
        static bool s_initialized;
    };
}

#endif //CATACLYSM_LOGGER_H
