#include "Kregowce.h"

void Kregowce::wyswietOpis() {
    cout << "kregowiec" << " " << typZwierzecia() << " " << nazwaZwierzecia() << " " << srodowiskoZwierzecia() << " " << stopienZwierzecia() << " " << wagaZwierzecia() << endl;
}

void Kregowce::zapiszOpis(fstream& plik) {
    plik << "kregowiec" << " " << typZwierzecia() << " " << nazwaZwierzecia() << " " << srodowiskoZwierzecia() << " " << stopienZwierzecia() << " " << wagaZwierzecia() << endl;
}

string Kregowce::typZwierzecia() {
    return typ;
};
string Kregowce::nazwaZwierzecia() {
    return nazwa;
};
int Kregowce::srodowiskoZwierzecia() {
    return srodowisko;
};
int Kregowce::stopienZwierzecia() {
    return stopienZagrozenia;
}
double Kregowce::wagaZwierzecia() {
    return waga;
}

