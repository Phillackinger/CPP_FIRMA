//
// Created by plack on 15.01.2021.
//

#include "CManager.h"

CManager::CManager( int alter, std::string name, int fixum) : cperson(alter, name){
    this->fixum = fixum;
}


std::string CManager::toString() const {

    std::ostringstream out;

    out << cperson::toString();

    out << "\nFixum: " << fixum << "\n";
    return out.str();

}

double CManager::getGehalt() const {
    return fixum;
}

int CManager::getAlter() const {
    return cperson::getAlter();
}
