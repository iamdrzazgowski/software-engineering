#include <iostream>
#include "../System.h"
#include "../User.h"
#include <string>

using namespace std;

int main()
{
    System * system = new System();
    User * user = new User();
    user->dodajSystem(system);
    user->logowanie();
    return 0;
}
