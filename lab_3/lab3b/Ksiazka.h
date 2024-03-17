//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : Ksiazka.h
//  @ Date : 17.03.2024
//  @ Author :
//
//


#if !defined(_KSIAZKA_H)
#define _KSIAZKA_H
#include "Autor.h"
#include <string>

using namespace std;


class Ksiazka {
public:
	void setTytul(string tytul);
	void setRokWydania(int rok);
	Ksiazka(string tytul, int rokWydania, Autor * autor);
	string getTytul();
	int getRokWydania();
	void getAutor();
private:
	string tytul;
	int rokWydania;
	Autor * autorKsiazki;
};

#endif  //_KSIAZKA_H
