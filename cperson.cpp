//
// Created by plack on 15.01.2021.
//


#include <sstream>
#include <iostream>

#include "cperson.h"



cperson::cperson(int alter, std::string name) {
    this->alter = alter;
    this->name = name;
}

int cperson::getAlter() const {
    return alter;
}

std::string cperson::toString() const {
    std::ostringstream out;
    out << "\nName: " << name << "\nAlter: " << alter << "\n";
    return out.str();
}

