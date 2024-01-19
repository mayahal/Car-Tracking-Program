#ifndef ADMIN_H
#define ADMIN_H
#include "Car.h"

#include <vector>
#include <string>

class Admin
{
public:
    Admin();

    void addCar();
    void showCars();
    void checkingParkingTime();

private:
    std::vector<Car> listOfCars;
};

#endif // ADMIN_H
