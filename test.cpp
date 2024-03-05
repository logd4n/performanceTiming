#include <iostream>
#include <thread>
#include "performance.h"

//test.cpp version 1.0.1

int main()
{
    system("clear");
    
    SoftByLOG::timer::Timer *timer = new SoftByLOG::timer::Timer();

    timer->Start();

    for (size_t i = 0; i < 3; i++)
    {
        std::this_thread::sleep_for(std::chrono::milliseconds(500));

        std::cout << "Test " << i+1 << " completed!\n"; 
    }
    
    for (size_t i = 3; i < 24; i++)
    {
        std::this_thread::sleep_for(std::chrono::milliseconds(50));

        std::cout << "Test " << i+1 << " completed!\n";
    }

    for (size_t i = 24; i < 27; i++)
    {
        std::this_thread::sleep_for(std::chrono::milliseconds(819));

        std::cout << "Test " << i+1 << " completed!\n";
    }

    for (size_t i = 27; i < 37; i++)
    {
        std::this_thread::sleep_for(std::chrono::milliseconds(77));

        std::cout << "Test " << i+1 << " completed!\n";
    }

    for (size_t i = 37; i < 65; i++)
    {
        std::this_thread::sleep_for(std::chrono::milliseconds(10));

        std::cout << "Test " << i+1 << " completed!\n";
    }

    for (size_t i = 65; i < 70; i++)
    {
        std::this_thread::sleep_for(std::chrono::milliseconds(253));

        std::cout << "Test " << i+1 << " completed!\n";
    }

    timer->End();

    std::cout << "\nTime: "; std::cout << timer->getTime();
    delete timer;

    std::cout << '\n' << std::endl;

    return 0;
}