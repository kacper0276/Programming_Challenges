#include <iostream>
#include <string>

using namespace std;

string szyfruj(string wiadomosc, string klucz) {
    char tablica[26][26];
    string napis = "";
    int iterator = 0;
    string wynik = "";

    // Inicjalizacja tablicy
    for (int i = 0; i < 26; i++) {
        for (int j = 0; j < 26; j++) {
            tablica[i][j] = 'A' + (i + j) % 26;
        }
    }

    for (int i = 0; i < wiadomosc.length(); i++) {
        if (wiadomosc[i] == ' ') {
            napis += " ";
        }
        else {
            napis += klucz[iterator];
            iterator++;
            if (iterator == klucz.length()) {
                iterator = 0;
            }
        }
    }

    for (int i = 0; i < wiadomosc.length(); i++) {
        if (wiadomosc[i] == ' ') {
            wynik += " ";
        }
        else {
            int row = napis[i] - 'A';
            int col = wiadomosc[i] - 'A';
            wynik += tablica[row][col];
        }
    }

    return wynik;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        string wiadomosc, klucz;

        cin >> klucz;
        cin.ignore(); // to wywołanie usunie z bufora znak '\n' pozostawiony przez obiekt "cin"
        getline(cin, wiadomosc);

        cout << szyfruj(wiadomosc, klucz) << endl;
    }

    return 0;
}