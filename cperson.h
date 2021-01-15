//
// Created by plack on 15.01.2021.
//

#ifndef CPP_FIRMA_CPERSON_H
#define CPP_FIRMA_CPERSON_H

class cperson{
private:
    int alter;
protected:
    std::string name;
public:
    cperson(int alter, std::string name);

    virtual int getAlter() const;

    virtual std::string toString() const;

    virtual double getGehalt() const=0;

};

#endif //CPP_FIRMA_CPERSON_H