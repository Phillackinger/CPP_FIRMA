//
// Created by plack on 15.01.2021.
//

#include <c++/4.8.3/sstream>
#include "cverkaeufer.h"

cverkaeufer::cverkaeufer(int alter, std::string name, int stunden, double stundenLohn, int anzahlVerkaufe, double verkaufsKommision) : carbeiter(alter, name, stunden, stundenLohn) {
    this->anzahlVerkaeufe = anzahlVerkaufe;
    this->verkaufsKommision = verkaufsKommision;
}

std::string cverkaeufer::toString() const {

    std::ostringstream out;

    out << carbeiter::toString();

    out << "\nanzahlVerkaufe: ";
    out << anzahlVerkaeufe;
    out << "\nverkaufsKommision: ";
    out << verkaufsKommision;
    out << "\n";

    return out.str();
}

double cverkaeufer::getGehalt() const {
    return anzahlVerkaeufe*verkaufsKommision+carbeiter::getGehalt();
}

int cverkaeufer::getAlter() const {
    return carbeiter::getAlter();
}

//int cverkaeufer::getAlter() const {
//    return carbeiter::getAlter();
//}
