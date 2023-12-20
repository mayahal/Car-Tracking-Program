cmake_minimum_required(VERSION 3.5)

project(Cars LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Cars main.cpp
    admin.h admin.cpp
    Car.h
    program.h program.cpp)

include(GNUInstallDirs)
install(TARGETS Cars
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
