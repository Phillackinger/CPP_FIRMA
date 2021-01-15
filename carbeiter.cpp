//
// Created by plack on 15.01.2021.
//

#include <sstream>
#include "carbeiter.h"

carbeiter::carbeiter(int alter, std::string name, int stunden, double stundenLohn) : cperson(alter, name) {
    this->stunden = stunden;
    this->stundenLohn = stundenLohn;
}

int carbeiter::getAlter() const {
    return cperson::getAlter();
}

std::string carbeiter::toString() const {

    std::ostringstream out;

    out << cperson::toString();

    out << "\nSTUNDEN: ";
    out << stunden;
    out << "\nSTUNDENLOHN: ";
    out << stundenLohn;
    out << "\n";

    return out.str();
}

double carbeiter::getGehalt() const {
    return stunden * stundenLohn;
}
