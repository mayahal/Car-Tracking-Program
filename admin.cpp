#include "admin.h"
#include "Car.h"
#include <iostream>
#include <string>
#include <chrono>
#include <ctime>

void printText(const std::string& text)
{
    std::cout << text << std::endl;
}

Admin::Admin()
{

}

void Admin::addCar()
{
    std::string carId;
    //std::cout << "before entering the car id" << std::endl;
    std::cout << "Please enter your car id" << std::endl;
    std::cin.ignore();
    std::getline(std::cin, carId);

    auto currentTime = std::chrono::system_clock::now();
    Car newCar(carId, currentTime);
    listOfCars.push_back(newCar);

    std::cout << "Your car was added" << std::endl;
    getchar();
    system("clear");
}

void Admin::showCars()
{
    printText("List of cars:");
    for(const auto& item : listOfCars)
    {

        std::cout << "Car Id: " << item.carId <<std::endl;
        std::time_t parkingTime = std::chrono::system_clock::to_time_t(item.time);
        std::cout <<"Parking time:" << std::ctime(&parkingTime) << std::endl;
    }
    std::cin.ignore();
    getchar();
    system("clear");
}

void Admin::checkingParkingTime()
{
    std::cout << "msg" << std::endl;
//    for(auto item : listOfCars)
//    {
//        item.
//    }
}
