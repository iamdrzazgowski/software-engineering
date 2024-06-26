//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : Schronisko.cpp
//  @ Date : 07.04.2024
//  @ Author :
//
//


#include "Schronisko.h"
#include <iostream>
#include <string>

using namespace std;

Schronisko::Schronisko(string nazwa, string adres) {
    this->nazwaSchronisko = nazwa;
    this->adres = adres;
}

void Schronisko::setNazwa(string nazwa) {
    this->nazwaSchronisko = nazwa;
}

void Schronisko::setAdres(string adres) {
    this->adres = adres;
}

string Schronisko::getNazwa() {
    return nazwaSchronisko;
}

string Schronisko::getAdres() {
    return adres;
}

void Schronisko::wyswietlPsy(){

    if(elementy.size() == 0){
        cout << "Kazdy piesek ma swoj dom :>" << endl;
    }else{
        for(int i = 0; i < elementy.size(); i++){
            cout << elementy[i]->getImie() << endl;
        }
    }
}

void Schronisko::dodajPsa(Pies * pies) {
    elementy.push_back(pies);
}

void Schronisko::adopcja(Pies * pies) {
    int index = 0;
    bool isInSchelter = false;
    for(int i = 0; i < elementy.size(); i++){
        if(elementy[i]->getImie() == pies->getImie()){
            index = i;
            isInSchelter = true;
        }
    }

    if(isInSchelter){
        elementy.erase(elementy.begin() + index);
    }
}

