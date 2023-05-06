#pragma once
#include <string>
#include "Zwierze.h"
using namespace std;

class Nibytkankowce : public Zwierze {

public:
	Nibytkankowce(string typ, string nazwa, int srodowisko) :
		Zwierze(typ, nazwa, srodowisko)
	{};
	void wyswietOpis();
	string typZwierzecia();
	string nazwaZwierzecia();
	int srodowiskoZwierzecia();
	void zapiszOpis(fstream& plik);
};

