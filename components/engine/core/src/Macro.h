//
// Created by BlackFlage on 29.09.2021.
//

#ifndef CATACLYSM_MACRO_H
#define CATACLYSM_MACRO_H

#include <csignal>
#include "Logger.h"

#if(!_WIN32)
    #error Cataclysm works only on Windows!
#endif

#define CTM_CORE_INFO(...) ctm::Logger::get_core_logger()->info(__VA_ARGS__)
#define CTM_CORE_ERROR(...) ctm::Logger::get_core_logger()->error(__VA_ARGS__)
#define CTM_CORE_WARNING(...) ctm::Logger::get_core_logger()->warn(__VA_ARGS__)
#define CTM_CORE_CRITICAL(...) ctm::Logger::get_core_logger()->critical(__VA_ARGS__)
#define CTM_CORE_TRACE(...) ctm::Logger::get_core_logger()->trace(__VA_ARGS__)

#ifdef CTM_ENABLE_ASSERTS
    #define CTM_ASSERT(x, ...) \
    { \
    if(!(x))                     \
        {                        \
            CTM_CORE_ERROR("Assertion failed!\nMessage: {0}\nFile: {1}\nLine: {2}\nFunction: {3}", __VA_ARGS__, __FILE__, __LINE__, __PRETTY_FUNCTION__); \
            __builtin_debugtrap();                                                                                                      \
        }                                                                                                    \
    }
#else
    #define CTM_ASSERT(x, ...)
#endif

#endif //CATACLYSM_MACRO_H
