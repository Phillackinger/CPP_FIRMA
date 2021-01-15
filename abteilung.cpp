//
// Created by plack on 15.01.2021.
//

#include <c++/4.8.3/sstream>
#include "abteilung.h"
#include "cperson.h"

abteilung::abteilung(std::string name) {
    this->name = name;
}

void abteilung::addMitarbeiter(cperson *p) {
    this->mitarbeiter.push_back(p);
}

void abteilung::removeMitarbeiter(int alter) {
    for(int x = 0; x < mitarbeiter.size(); x++){
        if (mitarbeiter.at(x)->getAlter() == alter) mitarbeiter.erase(mitarbeiter.begin() + x);
    }
}

double abteilung::getGesamtGehalt() const {
    double gesamtGehalt = 0;
    for (auto x : mitarbeiter){
        gesamtGehalt += x->getGehalt();
    }
    return gesamtGehalt;
}

std::string abteilung::toString() const {
    std::ostringstream out;

    for (auto x : mitarbeiter){
        out << "\n----";
        out << x->toString();
        out << "\n";
    }

    return out.str();
}
