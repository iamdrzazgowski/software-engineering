//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : Schronisko.h
//  @ Date : 07.04.2024
//  @ Author :
//
//


#if !defined(_SCHRONISKO_H)
#define _SCHRONISKO_H
#include "Pies.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;


class Schronisko {
public:
	Schronisko(string nazwa, string adres);
	void setNazwa(string nazwa);
	void setAdres(string adres);
	string getNazwa();
	string getAdres();
	void dodajPsa(Pies * pies);
	void adopcja(Pies * pies);
	void wyswietlPsy();
private:
	vector<Pies *> elementy;
	string nazwaSchronisko;
	string adres;
};

#endif  //_SCHRONISKO_H