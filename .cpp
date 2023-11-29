using namespace std;

int main() {
    double wartoscSprzedazy;
    double premia;
    double wynagrodzenie;

    
    cout << "Podaj wartość sprzedaży: ";
    cin >> wartoscSprzedazy;

    
    cout << "Podaj wartość premii: ";
    cin >> premia;

    
    wynagrodzenie = wartoscSprzedazy * premia;

    
    cout << "Wynagrodzenie pracownika: " << wynagrodzenie << endl;

    return 0;
}
