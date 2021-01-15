#include <iostream>
#include "carbeiter.h"
#include "cverkaeufer.h"
#include "CManager.h"
#include "abteilung.h"

using namespace std;

int main() {
    carbeiter *ich;

    ich = new carbeiter(80, "Tim Tom", 40, 50.0);

    cout << "\n*******************************************" << endl;
    cout << ich->toString() << endl;

    cout << "Mein Alter: " << ich->getAlter() << endl;
    cout << "Mein Gehalt: " << ich->getGehalt() << endl;
    cout << "\n*******************************************" << endl;


    auto du = new cverkaeufer(20, "Rakek", 20, 25.0, 10, 0.5);

    cout << du->toString() << endl;

    cout << "Dein Alter: " << du->getAlter() << endl;
    cout << "Dein Gehalt: " << du->getGehalt() << endl;

    cout << "\n*******************************************" << endl;

    auto CEO = new CManager(56, "Picard", 403);

    cout << CEO->toString() << endl;

    cout << "Dein Alter: " << CEO->getAlter() << endl;
    cout << "Dein Gehalt: " << CEO->getGehalt() << endl;

    cout << "\n*******************************************" << endl;
    cout << "\n*******************************************" << endl;

    abteilung *TheOffice = new abteilung("Apple");

    TheOffice->addMitarbeiter(ich);
    TheOffice->addMitarbeiter(du);
    TheOffice->addMitarbeiter(CEO);

    cout << TheOffice->toString() << endl;
    cout << TheOffice->getGesamtGehalt() << endl;


    cout << endl << endl;

    return EXIT_SUCCESS;
}
