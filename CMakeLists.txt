cmake_minimum_required(VERSION 3.17)
project(CPP_FIRMA)

set(CMAKE_CXX_STANDARD 14)

add_executable(CPP_FIRMA main.cpp cperson.h cperson.cpp carbeiter.cpp carbeiter.h cverkaeufer.cpp cverkaeufer.h CManager.cpp CManager.h abteilung.cpp abteilung.h)