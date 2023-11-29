#include <iostream>
#include <string>
using namespace std;

int main() {
    string username;
    string password;

    
    string poprawnaNazwaUzytkownika = "mojaNazwaUzytkownika";
    string poprawneHaslo = "mojeHaslo";

    
    cout << "Witaj w aplikacji Make Your Own Music!" << endl;
    cout << "Podaj nazwę użytkownika: ";
    cin >> username;
    cout << "Podaj hasło: ";
    cin >> password;

    
    if (username == poprawnaNazwaUzytkownika && password == poprawneHaslo) {
        cout << "Zalogowano pomyślnie! Możesz teraz korzystać z aplikacji." << endl;
    } else {
        cout << "Logowanie nie powiodło się. Sprawdź nazwę użytkownika i hasło." << endl;
    }

    return 0;
}
