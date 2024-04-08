#include <iostream>
#include <string>
#include "../Pies.h"
#include "../Schronisko.h"

using namespace std;

int main()
{
    Schronisko * schronisko = new Schronisko("Druga Szansa", "Lubelska 24");
    Pies * pies = new Pies("Majki", "Samojed");
    pies->setSrodowisko("Ladowe");
    pies->setWaga(24.5);
    cout << "Srodowisko: " << pies->getSrodowisko() << " Waga: " << pies->getWaga() << endl;

    schronisko->dodajPsa(pies);
    schronisko->wyswietlPsy();
    schronisko->adopcja(pies);
    schronisko->wyswietlPsy();

    return 0;
}
