//
// Created by BlackFlage on 29.09.2021.
//

#ifndef CATACLYSM_WINDOW_H
#define CATACLYSM_WINDOW_H

#include <Windows.h>
#include <optional>
#include "Macro.h"

namespace ctm
{
    class Window
    {
    public:
        Window(HWND a_hwnd);
        ~Window();

        static Window* create_window(const char* a_class_name, const char* a_window_name);

        std::optional<int> process_messages();
        inline void show_window() { ShowWindow(m_hwnd, 3); };
    private:
        HWND m_hwnd;
        int m_width;
        int m_height;
    };
}


#endif //CATACLYSM_WINDOW_H
