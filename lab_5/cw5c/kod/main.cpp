#include <iostream>
#include <string>
#include "../Dzial.h"
#include "../Firma.h"

using namespace std;

int main()
{

    Firma * firma = new Firma("NetCode", 675873758, "Jozef Nowicki");
    Dzial * dzial = new Dzial("HR");
    firma->dodajDzial(dzial);
    dzial->setKierownik("Janusz", "Tracz");
    firma->wyswietlDzialy();
    cout << dzial->getKierownik()->getImie() << " " << dzial->getKierownik()->getNazwisko() << endl;
    firma->usunDzial(dzial);
    return 0;
}
