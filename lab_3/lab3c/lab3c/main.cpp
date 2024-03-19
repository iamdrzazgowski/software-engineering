#include <iostream>
#include "../Serial.h"
#include "../PlatformaVOD.h"

using namespace std;

int main()
{
    PlatformaVOD *platforma = new PlatformaVOD("WatchIT");

    Serial serial("Mr Robot", "Sam Esmail", 2015);
    Serial serial2("Breaking Bad", "nieznany", 2004);
    Serial serial3("Rick i Morty", "nieznany", 2016);
    Serial serial4("Bojack Horseman", "nienzany", 2006);

    platforma->dodajSerial(serial);
    platforma->dodajSerial(serial2);
    platforma->getSeriale();
    cout << "Po usunieciu serial" << endl;
    platforma->usunSerial(serial);
    platforma->getSeriale();
    platforma->dodajSerial(serial3);
    cout << "Po dodaniu serialu" << endl;
    platforma->dodajSerial(serial4);
    platforma->getSeriale();
    return 0;
}
