//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : System.h
//  @ Date : 09.04.2024
//  @ Author :
//
//


#if !defined(_SYSTEM_H)
#define _SYSTEM_H
#include <iostream>
#include <string>
#include <vector>
#include "User.h"

using namespace std;


class User;

class System {
public:
	bool uwierzytelnianie(string login, string haslo);
	void dodajUser(User * user);
private:
	vector<User *> uzytkownicy;
};

#endif  //_SYSTEM_H