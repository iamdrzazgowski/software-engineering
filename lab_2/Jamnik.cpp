//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : Jamnik.cpp
//  @ Date : 10.03.2024
//  @ Author :
//
//


#include "Jamnik.h"
#include <string>
#include <iostream>

using namespace std;

void Jamnik::wydajGlos() {
    cout << "Hau hau" << endl;
}

void Jamnik::jedz() {
    cout << "mniam mniam" << endl;
}

Jamnik::Jamnik(string imie, string wlasciciel, int wiek) {
    this->imie = imie;
    this->wlasciciel = wlasciciel;
    this->wiek = wiek;
}

string Jamnik::getImie() {
    return imie;
}

string Jamnik::getWlasciciel() {
    return wlasciciel;
}

int Jamnik::getWiek() {
    return wiek;
}

