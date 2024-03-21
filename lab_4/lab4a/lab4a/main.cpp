#include <iostream>
#include "../Firma.h"
#include "../Pracownik.h"
#include <string>

using namespace std;

int main()
{
    Firma * firma = new Firma("IT-WORLD","5026954640");
    Pracownik * pracownik1 = new Pracownik("Zbyszek", "Tyszczuk", "Lubelska 34");
    Pracownik * pracownik2 = new Pracownik("Maciej", "Zbyszko", "Lwowska 12");
    Pracownik * pracownik3 = new Pracownik("Janusz", "Cebula", "Trybunalska 86");

    cout << "Dodani pracownicy do firmy:" << endl;
    firma->dodajPracownika(pracownik1);
    firma->dodajPracownika(pracownik2);
    firma->dodajPracownika(pracownik3);
    firma->wyswietlPracownikow();

    cout << "\nLista pracownikow po usunieciu pracownika:" << endl;
    firma->usunPracownika(pracownik2);
    firma->wyswietlPracownikow();
    return 0;
}
