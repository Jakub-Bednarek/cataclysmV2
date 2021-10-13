//
// Created by BlackFlage on 07.09.2021.
//

#include <iostream>
#include <Cataclysm.h>

int main(int argc, char** argv)
{
    ctm::Application* application = new ctm::Application();

    application->run();

    delete application;
    return 0;
}