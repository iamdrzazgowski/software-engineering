//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : Kurier.cpp
//  @ Date : 17.03.2024
//  @ Author :
//
//


#include "Kurier.h"
#include <iostream>
#include <string>

using namespace std;

Kurier::Kurier(string imie, string nazwisko, string id) {
    this->imie = imie;
    this->nazwisko = nazwisko;
    this->idKuriera = id;
}

void Kurier::dostarcz(Paczka * paczka) {
    paczka->zmienStatus(1);
    cout << "Status paczki " << paczka->getStatus() << endl;
}

