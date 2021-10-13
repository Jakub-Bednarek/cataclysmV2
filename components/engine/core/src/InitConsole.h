//
// Created by BlackFlage on 29.09.2021.
//

#ifndef CATACLYSM_INITCONSOLE_H
#define CATACLYSM_INITCONSOLE_H

#include <cstdio>
#include "Macro.h"

namespace ctm
{
    FILE *g_ic_file_cout_stream;

    void init_console()
    {
        CTM_ASSERT(AllocConsole(), "Failed to initialize console!");
        CTM_ASSERT(freopen_s(&g_ic_file_cout_stream, "CONOUT$", "w", stdout) == 0, "Failed to initialize console!")
    }
}

#endif //CATACLYSM_INITCONSOLE_H
