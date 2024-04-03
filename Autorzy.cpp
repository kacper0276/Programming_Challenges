#include <iostream>

using namespace std;

string funkcja(int g, int m) {
    if (g == m) {
        string wynik = "2";
        for (int i = 0; i < g; i++) {
            wynik += "0";
        }

        return wynik;
    }
    else {
        string wynik = "1";
        string mniejsza = "1";
        bool gWieksza = g > m ? true : false;
        
        if (gWieksza) {
            for (int i = 0; i < g - m - 1; i++) {
                wynik += "0";
            }

            for (int i = 0; i < m; i++) {
                mniejsza += "0";
            }
        }
        else {
            for (int i = 0; i < m - g - 1; i++) {
                wynik += "0";
            }

            for (int i = 0; i < g; i++) {
                mniejsza += "0";
            }
        }
        wynik += mniejsza;
        return wynik;
    }
}

int main() {
    int g, m;
    cin >> g >> m;

    cout << funkcja(g, m);

    return 0;
}
