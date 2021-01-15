//
// Created by plack on 15.01.2021.
//

#ifndef CPP_FIRMA_CMANAGER_H
#define CPP_FIRMA_CMANAGER_H

#include <sstream>
#include "cperson.h"

class CManager : public cperson{
private:

    int fixum;
public:
    int getAlter() const override;
    std::string toString() const;
    double getGehalt() const;

    CManager(int alter, std::string name, int fixum);
};


#endif //CPP_FIRMA_CMANAGER_H
