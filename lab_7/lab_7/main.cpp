#include <iostream>
#include "../Bernouli.h"

using namespace std;

int main()
{
    Bernouli *bernouli = new Bernouli();
    cout << bernouli->obliczPrawdopodobienstwo(0.6, 4, 3);
    return 0;
}
