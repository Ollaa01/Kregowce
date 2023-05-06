#include"Nibytkankowce.h"

void Nibytkankowce::wyswietOpis() {
    cout << "nibytkankowiec" << " " << typZwierzecia() << " " << nazwaZwierzecia() << " " << srodowiskoZwierzecia() << endl;
}

void Nibytkankowce::zapiszOpis(fstream& plik) {
    plik << "nibytkankowiec" << " " << typZwierzecia() << " " << nazwaZwierzecia() << " " << srodowiskoZwierzecia() << endl;
}

string Nibytkankowce::typZwierzecia() {
    return typ;
};
string Nibytkankowce::nazwaZwierzecia() {
    return nazwa;
};
int Nibytkankowce::srodowiskoZwierzecia() {
    return srodowisko;
};


