#include "program.h"

#include <iostream>
#include <cstdlib>

Program::Program()
{

}
//розділенння на юзера та на адмінів
//logging system
//unit tests
//time starting from clock
//sum of money to pay
//open the barrier gate if sum == 0
//create a system where you can interact with console by giving a id + timer

void Program::display()
{
    while(true)
    {
        std::cout << "Hi, enter the number what do you want to do: " << std::endl;
        std::cout << "1 - add car" << std::endl;
        std::cout << "2 - check time of the parking" << std::endl;
        std::cout << "3 - pay for parking" << std::endl;
        std::cout << "4 - check list of the parking cars" << std::endl;

        int userInput;
        std::cin >> userInput;
        switch(userInput)
        {
        case 1:
            system("clear");
            admin->addCar();
            break;
        case 2:
            system("clear");
            admin->checkingParkingTime();
            break;
        case 3:
            system("clear");
            //admin->checkingParkingTime();
            break;
        case 4:
            system("clear");
            admin->showCars();
            break;
        case 0:
            return;
        default:
            std::cout << "Invalid choice" << std::endl;
            break;
        }
    }
}

void Program::start()
{
    display();

}
