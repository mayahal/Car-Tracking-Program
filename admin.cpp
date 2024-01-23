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

//bags - to fix
//shows a list of main menu again and again "enter what do you want to do"
//how

void Admin::checkingParkingTime()
{
    printText("Enter car id");
    std::string inputCarId;
    std::cin.ignore();
    std::getline(std::cin, inputCarId);

    bool carFound = false;
    for(const auto& item : listOfCars)
    {
        if(item.carId == inputCarId)
        {
            std::cout << "Car Id: " << item.carId << std::endl;
            std::time_t startParkingTime = std::chrono::system_clock::to_time_t(item.time);
            std::cout << "Time of parking: " << std::ctime(&startParkingTime) << std::endl;

            auto currentTime = std::chrono::system_clock::now();
            std::time_t currTime = std::chrono::system_clock::to_time_t(currentTime);
            std::cout << "Current time: " << std::ctime(&currTime) << std::endl;

//            std::cout << "item.time: " << typeid(item.time).name() << std::endl;
//            std::cout << "startParkingTime: " << typeid(startParkingTime).name() << std::endl;
//            std::cout << "currTime: " << typeid(currTime).name() << std::endl;
//            std::cout << "currentTime: " << typeid(currentTime).name() << std::endl;

            auto timeDifference = std::chrono::duration<long>(startParkingTime - currTime);
            //std::cout << "timeDifference: " << typeid(timeDifference).name() << std::endl;
            //std::cout << "Time of parking: " << std::ctime(&timeDifference) << std::endl;
            std::cout << "Time duration on parking: "
                      << std::chrono::duration_cast<std::chrono::seconds>(timeDifference).count()
                      << " minutes" << std::endl;
            //std::cout << "Time duration on parking: " << std::chrono::duration_cast<std::chrono::minutes(timeDifference).count() << "seconds" << std::endl;

//            std::chrono::duration_cast<std::chrono::hours(timeDifference).count() << "hours, " <<
//                                             std::chrono::duration_cast<std::chrono::minutes(timeDifference).count() << "minutes, " <<
//                      std::chrono::duration_cast<std::chrono::minutes(timeDifference).count() << "seconds" << std::endl;
//            auto currentTime = std::chrono::system_clock::now();
//            std::time_t currTime = std::chrono::system_clock::to_time_t(currentTime);

            //std::chrono::duration<std::time_t> timeDifference = currentTime - item.time;

            //std::cout << "Time difference in seconds: " << timeDifference.count() << " seconds." << std::endl;

            carFound = true;
            break;
            //add time when you arrive
        }
    }

    if(!carFound)
    {
        printText("Car with entered id is not found.");
        printText("Please try again.");
    }

    std::cin.ignore();
    getchar();
    system("clear");
}
