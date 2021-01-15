//
// Created by plack on 15.01.2021.
//

#include <string>
#include "cperson.h"

#ifndef CPP_FIRMA_CARBEITER_H
#define CPP_FIRMA_CARBEITER_H


class carbeiter : public cperson {
private:
    int stunden;
    double stundenLohn;

public:
    carbeiter( int alter, std::string name, int stunden, double stundenLohn);

    int getAlter() const override;
    std::string toString() const;

    virtual double getGehalt() const;

};


#endif //CPP_FIRMA_CARBEITER_H
