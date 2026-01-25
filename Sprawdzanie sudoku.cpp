#include <iostream>

using namespace std;

bool rozwiaz_sudoku() {
    int plansza[9][9];

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            cin >> plansza[i][j];
        }
    }

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            if (plansza[i][j] < 1 || plansza[i][j] > 9) {
                return false;
            }
        }
    }

    for (int i = 0; i < 9; i++) {
        bool wystapilo[10] = { false };
        for (int j = 0; j < 9; j++) {
            int liczba = plansza[i][j];
            if (wystapilo[liczba]) return false;
            wystapilo[liczba] = true;
        }
    }

    for (int j = 0; j < 9; j++) {
        bool wystapilo[10] = { false };
        for (int i = 0; i < 9; i++) {
            int liczba = plansza[i][j];
            if (wystapilo[liczba]) return false;
            wystapilo[liczba] = true;
        }
    }

    for (int r = 0; r < 9; r += 3) {
        for (int c = 0; c < 9; c += 3) {
            bool wystapilo[10] = { false };
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    int liczba = plansza[r + i][c + j];
                    if (wystapilo[liczba]) return false;
                    wystapilo[liczba] = true;
                }
            }
        }
    }

    return true;
}

int main() {
    int n;
    if (cin >> n) {
        while (n--) {
            if (rozwiaz_sudoku()) {
                cout << "TAK" << endl;
            }
            else {
                cout << "NIE" << endl;
            }
        }
    }

    return 0;
}