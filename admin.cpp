#include "admin.h"
#include "Car.h"
#include <iostream>
#include <string>

Admin::Admin()
{

}

void Admin::addCar()
{
    std::string carId;
    std::cout << "before entering the car id" << std::endl; //log
    //std::getline(std::cin, carId); //should be checked if it's not empty
    std::cout << "Please enter your car id" << std::endl;
    std::cin >> carId; //up to here - works
    Car newCar(carId); //?
    listOfCars.push_back(newCar); //?
    std::cout << "add car func is over" << std::endl; //didn't show the msg
}

void Admin::showCars()
{
    for(auto item : listOfCars)
    {
        std::cout << item.carId << std::endl;
    }
}
