//
// Created by BlackFlage on 29.09.2021.
//

#include "Window.h"
#include "Macro.h"

namespace ctm
{
    Window::Window(HWND a_hwnd)
    {
        m_hwnd = a_hwnd;
    }

    LRESULT CALLBACK window_proc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
    {
        switch(uMsg)
        {
            case WM_DESTROY:
                PostQuitMessage(0);
                return 0;
            default:
                return DefWindowProc(hwnd, uMsg, wParam, lParam);
        }
    }

    Window* Window::create_window(const char* a_class_name, const char* a_window_name)
    {
        WNDCLASS wndClass = { };

        HINSTANCE hInstance = GetModuleHandleA(NULL);

        wndClass.lpfnWndProc = window_proc;
        wndClass.hInstance = hInstance;
        wndClass.lpszClassName = a_class_name;

        RegisterClassA(&wndClass);

        HWND hwnd = CreateWindowExA(
                0,
                a_class_name,
                a_window_name,
                WS_OVERLAPPEDWINDOW,

                CW_USEDEFAULT, CW_USEDEFAULT, CW_USEDEFAULT, CW_USEDEFAULT,

                NULL,
                NULL,
                hInstance,
                NULL
                );

        CTM_ASSERT(!false, "Failed to initialize window!");
        CTM_CORE_INFO("Window created successfully!");

        return new Window(hwnd);
    }

    std::optional<int> Window::process_messages()
    {
        MSG msg;

        while(PeekMessageA(&msg, nullptr, 0, 0, PM_REMOVE))
        {
            if(msg.message == WM_QUIT)
            {
                return msg.wParam;
            }

            TranslateMessage(&msg);
            DispatchMessage(&msg);
        }

        return {};
    }

    Window::~Window()
    {
        CTM_ASSERT(!DestroyWindow(m_hwnd), "Failed to destroy window!");
        CTM_CORE_INFO("Window destroyed successfully!");
    }
}
