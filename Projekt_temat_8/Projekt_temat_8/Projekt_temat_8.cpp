#include <iostream>
#include <list>
#include <string>
#include "Zwierze.h"
#include "Nibytkankowce.h"
#include "Tkankowce.h"
#include "Kregowce.h"
#include "Procedury.h"
using namespace std;

int main()
{
    class Procedury* procedury = new Procedury();
    procedury->odczyt();

    bool wybor1;
    int wybor2;

    while (true) {
        try {
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
            cout << "Baza zwierzat\n";
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
            cout << " 1 - Dodaj nowe zwierze" << endl;
            cout << " 2 - Wyswietl zwierzeta" << endl;
            cout << " 3 - Zapisz aktualna baze do pliku" << endl;
            cout << " 4 - Wyjdz" << endl;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
            cin >> wybor2;
            switch (wybor2) {
            case 1:
                procedury->dodaj();
                break;
            case 2:
                procedury->wyswietl();
                break;
            case 3:
                procedury->zapisz();
                break;
            case 4:
                return 0;
            }
            cout << "Czy przerwac? (0-nie/1-tak) "; cin >> wybor1;
            if (wybor1) break;
            system("cls");
        }
        catch (const out_of_range& e) {
            cout << "Zly indeks: " << e.what() << endl;
        }
    }
    delete procedury;
    return 0;
}

