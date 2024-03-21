#include <iostream>
#include <string>
#include "../Bank.h"
#include "../Oddzial.h"

using namespace std;

int main()
{
    Bank * bank = new Bank("mBank");
    bank->setOddzial(421, "ul. Krakowska 2, 30-002 Krakow");
    cout << bank->getNazwa() << endl;
    bank->wypiszOddzial();

    delete bank;
    return 0;
}
