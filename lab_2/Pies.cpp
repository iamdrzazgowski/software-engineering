//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : Pies.cpp
//  @ Date : 10.03.2024
//  @ Author :
//
//


#include "Pies.h"
#include <string>
#include <iostream>

using namespace std;

void Pies::wykonajSztuczke() {
    cout << "*wykonal obrot*" << endl;
}

void Pies::setRasa(string rasa) {
    this->rasa = rasa;
}

void Pies::setUmaszczenie(string umaszczenie) {
    this->umaszczenie = umaszczenie;
}

string Pies::getRasa() {
    return rasa;
}

string Pies::getUmaszczenie() {
    return umaszczenie;
}

