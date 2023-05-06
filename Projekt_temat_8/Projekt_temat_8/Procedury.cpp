#include "Procedury.h"
#include<iostream>

void Procedury::sprawdz_double(string str, double& x) {
	try {
		x = stod(str);
	}
	catch (exception& e) { cout << "Podaj prawidlowy typ: "; cin >> str; sprawdz_double(str, x); }
}

void Procedury::sprawdz_int(string str, int& x) {
	try {
		x = stoi(str);
	}
	catch (exception& e) { cout << "Podaj prawidlowy typ: "; cin >> str; sprawdz_int(str, x); }
}

Procedury::~Procedury() {
	for (auto& zwierze : lista) delete zwierze;
	lista.clear();
}

void Procedury::odczyt() {
	vector <string> el;
	string linia;
	string typ;
	string nazwa;
	string wybor;
	int srodowisko;
	int stopien;
	int waga;
	int max = 0;

	ifstream plik;
	plik.open("baza.txt");
	while (plik >> linia) {
		el.push_back(linia);
	}
	plik.close();

	for (vector<string> ::iterator it = el.begin(); it != el.end(); ++it) {
		wybor = (*it);
		++it;
		typ = (*it);
		++it;
		nazwa = (*it);
		++it;
		srodowisko = atoi((*it).c_str());
		if (wybor == "nibytkankowiec") {
			auto* nowy = new Nibytkankowce(typ, nazwa, srodowisko);
			lista.push_back(nowy);
		}
		if (wybor == "tkankowiec") {
			auto* nowy = new Tkankowce(typ, nazwa, srodowisko);
			lista.push_back(nowy);
		}
		if (wybor == "kregowiec") {
			++it;
			stopien = atoi((*it).c_str());
			++it;
			waga = atoi((*it).c_str());
			auto* nowy = new Kregowce(typ, nazwa, srodowisko, stopien, waga);
			lista.push_back(nowy);

		}
	}
}

void Procedury::dodaj() {
	string pomocnicza;
	string typ;
	string nazwa;
	int srodowisko;
	int wybor;
	int stopien;
	double waga;

	cout << "Jaki typ chcesz dodac(0-nibytkankowce, 1-tkankowce, 2-kregowce) ";
	cin >> pomocnicza;
	sprawdz_int(pomocnicza, wybor);
	while (wybor < 0 || wybor > 2)
	{ cout << "Podaj prawidlowa liczbe: "; cin >> wybor; }

	cout << "podaj typ: ";
	cin.ignore();
	getline(cin, typ);
	cout << "Podaj nazwe(nazwy dwuczlonowe prosze oddzielac znakiem'_'): ";
	getline(cin, nazwa);
	cout << "Podaj srodowiko(0-ladowe, 1- wodne): ";
	cin >> pomocnicza;
	sprawdz_int(pomocnicza, srodowisko);
	while (srodowisko < 0 || srodowisko > 1) { cout << "Podaj prawidlowa liczbe: "; cin >> srodowisko; }

	if (wybor == 0) {
		auto* nowy = new Nibytkankowce(typ, nazwa, srodowisko);
		lista.push_back(nowy);
	}
	if (wybor == 1) {
		auto* nowy = new Tkankowce(typ, nazwa, srodowisko);
		lista.push_back(nowy);
	}
	if (wybor == 2) {
		cout << "Podaj stopien zagorozenia (1 -wymarle,2 -zagrozone,3 -bliskie zagrozenia,4 - najmniejszej troski): ";;
		cin >> pomocnicza;
		sprawdz_int(pomocnicza, stopien);
		while (stopien < 1 || stopien > 4) { cout << "Podaj prawidlowa liczbe: "; cin >> stopien;}
		cout << "Podaj wage: ";
		cin >> pomocnicza;
		sprawdz_double(pomocnicza, waga);

		auto* nowy = new Kregowce(typ, nazwa, srodowisko, stopien, waga);
		lista.push_back(nowy);
	}
}

void Procedury::wyswietl() {
	for (auto it = lista.begin(); it != lista.end(); ++it) {
		(*it)->wyswietOpis();
	}
}

void Procedury::zapisz() {
	fstream plik;
	plik.open("baza.txt");
	for (auto it = lista.begin(); it != lista.end(); ++it) {
		(*it)->zapiszOpis(plik);
	}
	plik.close();
}
