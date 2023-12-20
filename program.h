#ifndef PROGRAM_H
#define PROGRAM_H
#include "admin.h"

class Program
{
public:
    Program();
    void start();
    void display();

    Admin* admin = new(Admin);
};

#endif // PROGRAM_H
