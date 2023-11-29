#include <iostream>
#include <string>
using namespace std;

int main() {
    string imie, nazwisko, telefon, adres, pesel;

    // Wprowadzanie danych osobowych
    cout << "Podaj swoje imie: ";
    getline(cin, imie);

    cout << "Podaj swoje nazwisko: ";
    getline(cin, nazwisko);

    cout << "Podaj numer telefonu: ";
    getline(cin, telefon);

    cout << "Podaj adres zamieszkania: ";
    getline(cin, adres);

    cout << "Podaj PESEL: ";
    getline(cin, pesel);

    // Wyświetlenie wprowadzonych danych
    cout << "\nPodane dane osobowe:\n";
    cout << "Imie: " << imie << endl;
    cout << "Nazwisko: " << nazwisko << endl;
    cout << "Telefon: " << telefon << endl;
    cout << "Adres: " << adres << endl;
    cout << "PESEL: " << pesel << endl;

    return 0;
}
