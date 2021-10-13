//
// Created by BlackFlage on 15.09.2021.
//

#ifndef CATACLYSM_APPLICATION_H
#define CATACLYSM_APPLICATION_H

#include "Logger.h"
#include "Window.h"

namespace ctm
{
    class Application
    {
    public:
        Application();
        ~Application();

        void run();
    private:
        Window* m_window;
    };
}


#endif //CATACLYSM_APPLICATION_H
