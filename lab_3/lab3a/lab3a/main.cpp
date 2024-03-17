#include <iostream>
#include <string>
#include "../Kurier.h"
#include "../Paczka.h"

using namespace std;

int main()
{
    Paczka * paczka = new Paczka("Langiewicza 24", 1);
    Kurier * kurier = new Kurier("Mikolaj", "Brzozowski", "MB7885");
    cout << paczka->getStatus() << endl;
    kurier->dostarcz(paczka);

    return 0;
}
