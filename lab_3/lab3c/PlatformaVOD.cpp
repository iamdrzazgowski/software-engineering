//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : PlatformaVOD.cpp
//  @ Date : 12.03.2024
//  @ Author :
//
//


#include "PlatformaVOD.h"
#include "Serial.h"
#include <string>
#include <iostream>

using namespace std;

void PlatformaVOD::dodajSerial(Serial serial) {
    this->seriale.push_back(serial);
}

void PlatformaVOD::usunSerial(Serial serial) {
    int index = 0;
    bool isInSerials = false;
    for(int i = 0; i < seriale.size(); i++){
        if(seriale[i].getNazwaSerialu() == serial.getNazwaSerialu()){
            index = i;
            isInSerials = true;
        }
    }

    if(isInSerials){
        seriale.erase(seriale.begin() + index);
    }
}

void PlatformaVOD::getSeriale() {
    for(int i = 0; i < seriale.size(); i++){
        cout << seriale[i].getNazwaSerialu() << endl;
    }
}

string PlatformaVOD::getNazwa() {
    return nazwa;
}

PlatformaVOD::PlatformaVOD(string nazwa) {
    this->nazwa = nazwa;
}

