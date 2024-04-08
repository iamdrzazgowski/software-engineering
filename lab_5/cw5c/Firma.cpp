//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : Firma.cpp
//  @ Date : 08.04.2024
//  @ Author :
//
//


#include "Firma.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

Firma::Firma(string nazwa, int NIP, string wlasciciel) {
    this->nazwa = nazwa;
    this->NIP = NIP;
    this->wlasciciel = wlasciciel;
}

void Firma::dodajDzial(Dzial * dzial) {
    dzialy.push_back(dzial);
}

void Firma::usunDzial(Dzial * dzial) {
    int index = 0;
    bool isInDzial = false;
    for(int i = 0; i <dzialy.size(); i++){
        if(dzialy[i]->getNazwaDzialu() == dzial->getNazwaDzialu()){
            index = i;
            isInDzial = true;
        }
    }

    if(isInDzial){
        dzialy.erase(dzialy.begin() + index);
        delete dzialy[index];
    }
}

void Firma::setNazwa(string nazwa) {
    this->nazwa = nazwa;
}

void Firma::setNIP(int nip) {
    this->NIP = nip;
}

void Firma::setWlasciciel(string wlasciciel) {
    this->wlasciciel = wlasciciel;
}

string Firma::getNazwa() {
    return nazwa;
}

int Firma::getNIP() {
    return NIP;
}

string Firma::getWlasciciel() {
    return wlasciciel;
}

void Firma::wyswietlDzialy() {
    for(int i = 0; i < dzialy.size(); i++){
        cout << dzialy[i]->getNazwaDzialu() << endl;
    }
}

Firma::~Firma() {

}
