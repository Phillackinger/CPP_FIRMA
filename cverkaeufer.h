//
// Created by plack on 15.01.2021.
//

#ifndef CPP_FIRMA_CVERKAEUFER_H
#define CPP_FIRMA_CVERKAEUFER_H

#include "carbeiter.h"

class cverkaeufer : public carbeiter{
private:
    int anzahlVerkaeufe;
    double verkaufsKommision;
public:
    cverkaeufer(int alter, std::string name, int stunden, double stundenLohn, int anzahlVerkaufe, double verkaufsKommision);

    int getAlter() const override;
    std::string toString() const;
    double getGehalt() const;
};


#endif //CPP_FIRMA_CVERKAEUFER_H
