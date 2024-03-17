#include <iostream>
#include <string>
#include "../Autor.h"
#include "../Ksiazka.h"

using namespace std;


int main()
{
    Autor * autor1 = new Autor("Andrzej", "Szpakowski");
    Ksiazka * ksiazka = new Ksiazka("Wiedzmin", 1998, autor1);

    ksiazka->getAutor();
    cout << ksiazka->getTytul() << " " << ksiazka->getRokWydania() << " rok" << endl;
    return 0;
}
