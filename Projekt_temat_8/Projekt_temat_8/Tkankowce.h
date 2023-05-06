#pragma once
#include "Zwierze.h"
#include<string>
using namespace std;

class Tkankowce : public Zwierze {
public:
	Tkankowce(string typ, string nazwa, int srodowisko) :
		Zwierze(typ, nazwa, srodowisko)
	{};
	void wyswietOpis();
	string typZwierzecia();
	string nazwaZwierzecia();
	int srodowiskoZwierzecia();
	void zapiszOpis(fstream& plik);
};

