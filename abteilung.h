//
// Created by plack on 15.01.2021.
//

#ifndef CPP_FIRMA_ABTEILUNG_H
#define CPP_FIRMA_ABTEILUNG_H

#include <cstdlib>
#include <c++/4.8.3/vector>
#include <c++/4.8.3/string>
#include "cperson.h"

class abteilung {
private:
    std::vector<cperson*> mitarbeiter;
    std::string name;
public:
    abteilung(std::string name);

    void addMitarbeiter(cperson* p);
    void removeMitarbeiter(int alter);

    double getGesamtGehalt() const;

    std::string toString() const;
};


#endif //CPP_FIRMA_ABTEILUNG_H
