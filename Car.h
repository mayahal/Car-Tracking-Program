#ifndef CAR_H
#define CAR_H
#include <string>
#include <chrono>

class Car
{
public:
    std::string carId;
    const std::chrono::system_clock::time_point time;

    Car(std::string id, const std::chrono::system_clock::time_point& timer): carId(id), time(timer) {}

};

#endif // CAR_H
