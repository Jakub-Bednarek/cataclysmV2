//
// Created by BlackFlage on 15.09.2021.
//

#include "Application.h"
#include "InitConsole.h"
#include "Window.h"

ctm::Application::Application()
{
    ctm::Logger::initialize();

    m_window = Window::create_window("XDDDD", "O CHUJ");
    m_window->show_window();
}

void ctm::Application::run()
{
    while(true)
    {
        if(const auto retValue = m_window->process_messages())
        {
            return;
        }
    }
}

ctm::Application::~Application()
{
    delete m_window;

    CTM_CORE_INFO("Application destroyed successfully!");
}
