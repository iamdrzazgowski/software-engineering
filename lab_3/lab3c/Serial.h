//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : Serial.h
//  @ Date : 12.03.2024
//  @ Author :
//
//


#if !defined(_SERIAL_H)
#define _SERIAL_H

#include <string>
#include <iostream>

using namespace std;


class Serial {
public:
	Serial(string nazwa, string rezyser, int rokProdukcji);
	string getNazwaSerialu();
	string getRezyser();
	int getRokProdukcji();
private:
	string nazwaSerialu;
	string rezyser;
	int rokProdukcji;
};

#endif  //_SERIAL_H
