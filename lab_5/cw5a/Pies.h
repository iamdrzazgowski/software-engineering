//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : Pies.h
//  @ Date : 07.04.2024
//  @ Author :
//
//


#if !defined(_PIES_H)
#define _PIES_H

#include "Ssak.h"
#include <iostream>
#include <string>

using namespace std;

class Pies : public Ssak {
public:
	Pies(string imie, string rasa);
	void setImie(string imie);
	void setRasa(string rasa);
	string getImie();
	string getRasa();
private:
	string imie;
	string rasa;
};

#endif  //_PIES_H