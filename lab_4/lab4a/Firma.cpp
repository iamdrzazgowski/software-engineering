//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : Firma.cpp
//  @ Date : 19.03.2024
//  @ Author :
//
//


#include "Firma.h"
#include "Pracownik.h"
#include <string>
#include <iostream>
#include <vector>

using namespace std;

Firma::Firma(string nazwa, string nip) {
    this->nazwa = nazwa;
    this->nip = nip;
}

void Firma::dodajPracownika(Pracownik * pracownik) {
    pracownicy.push_back(pracownik);
}

void Firma::usunPracownika(Pracownik * pracownik) {
    int index = 0;
    for(int i = 0; i < pracownicy.size(); i++){
        if(pracownik == pracownicy[i]){
            index++;
        }
    }

    pracownicy.erase(pracownicy.begin() + index);
}

void Firma::wyswietlPracownikow() {
    for(int i = 0; i < pracownicy.size(); i++){
        cout << pracownicy[i]->getImie() << " " << pracownicy[i]->getNazwisko() << endl;
    }
}
