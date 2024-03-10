#include <iostream>
#include "../Jamnik.h"
#include <string>

using namespace std;

int main()
{
    Jamnik jamnik("Reksio", "Adrian", 3);
    cout << jamnik.wydajGlos();
    return 0;
}
