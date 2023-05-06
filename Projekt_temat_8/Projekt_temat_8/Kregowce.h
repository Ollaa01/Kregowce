#pragma once
#include"Tkankowce.h"

class Kregowce : public Tkankowce {
	int stopienZagrozenia;
	double waga;
public:
	Kregowce(string typ, string nazwa, int srodowisko, int stopienZagrozenia, double waga) :
		Tkankowce(typ, nazwa, srodowisko),
		stopienZagrozenia(stopienZagrozenia),
		waga(waga)
	{};
	string typZwierzecia();
	string nazwaZwierzecia();
	int srodowiskoZwierzecia();
	int stopienZwierzecia();
	double wagaZwierzecia();
	void wyswietOpis();
	void zapiszOpis(fstream& plik);

};

