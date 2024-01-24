#include <iostream>
using namespace std;
int main() {
	float srednia, najmniejsza, roznica, suma = 0;
	int ile, n, wynik;
	float tablica[100];
    cin >> ile;

    for (int i = 1; i <= ile; i++) {
        najmniejsza = 100;
        cin >> n;
        for (int j = 0; j < n; j++) {
            cin >> tablica[j];
            suma += tablica[j];
        }
        srednia = suma/n;
        for (int k = 0; k < n; k++) {
            roznica = srednia - tablica[k];
            if (roznica < 0) roznica = -roznica;
            if (roznica < najmniejsza) {
                najmniejsza = roznica;
                wynik = tablica[k];
            }
        }
        
        cout << wynik << endl;
        suma = 0;
        
    }
}
