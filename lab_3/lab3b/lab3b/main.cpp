#include <iostream>
#include <string>
#include "../Autor.h"
#include "../Ksiazka.h"

using namespace std;


int main()
{
    Autor * autor1 = new Autor("Andrzej", "Sapkowski");
    Ksiazka * ksiazka = new Ksiazka("Wiedzmin", 1998, autor1);
    autor1->setKsiazki(ksiazka);

    cout << autor1->getImie() << " " << autor1->getNazwisko() << endl;
    cout << "Napisane Ksiazki przez autora:\n";
    autor1->napisaneKsiazkiView();
    cout << autor1->getKsiazki().at(0)->getAutor()->getImie();
}
