#include "Tkankowce.h"

void Tkankowce::wyswietOpis() {
    cout << "tkankowiec" << " " << typZwierzecia() << " " << nazwaZwierzecia() << " " << srodowiskoZwierzecia() << endl;
}
void Tkankowce::zapiszOpis(fstream& plik) {
    plik << "tkankowiec" << " " << typZwierzecia() << " " << nazwaZwierzecia() << " " << srodowiskoZwierzecia() << endl;
}
string Tkankowce::typZwierzecia() {
    return typ;
};
string Tkankowce::nazwaZwierzecia() {
    return nazwa;
};
int Tkankowce::srodowiskoZwierzecia() {
    return srodowisko;
};
