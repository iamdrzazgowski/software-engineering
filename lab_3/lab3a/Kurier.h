//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : Kurier.h
//  @ Date : 17.03.2024
//  @ Author :
//
//


#if !defined(_KURIER_H)
#define _KURIER_H
#include <iostream>
#include <string>

#include "./Paczka.h"

using namespace std;

class Kurier {
public:
	Kurier(string imie, string nazwisko, string id);
	void dostarcz(Paczka * paczka);
private:
	string imie;
	string nazwisko;
	string idKuriera;
};

#endif  //_KURIER_H