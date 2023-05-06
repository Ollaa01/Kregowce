#pragma once
#include <iostream>
#include <string>
#include <list>
#include <fstream>
using namespace std;

class Zwierze
{
protected:
	string typ;
	string nazwa;
	int srodowisko;
public:
	Zwierze(string typ, string nazwa, int srodowisko) : typ(typ), nazwa(nazwa), srodowisko(srodowisko) { }
	virtual void wyswietOpis() = 0;
	virtual void zapiszOpis(fstream& plik) = 0;
	virtual string typZwierzecia() = 0;
	virtual string nazwaZwierzecia() = 0;
	virtual int srodowiskoZwierzecia() = 0;
};

