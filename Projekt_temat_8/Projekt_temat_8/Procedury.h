#include <list>
#include <vector>
#include<string>
#include<fstream>
#include"Zwierze.h"
#include "Tkankowce.h"
#include "Nibytkankowce.h"
#include "Kregowce.h"
using namespace std;

class Procedury {
	list<Zwierze* > lista;
public:
	~Procedury();
	void dodaj();
	void wyswietl();
	void zapisz();
	void odczyt();
	void sprawdz_double(string str, double& x);
	void sprawdz_int(string str, int& x);
};

