#include <iostream>

using namespace std;

// 0 - niedziela, 1 - poniedzialek, ..., 6 - sobota
int weekDay(int d, int m, int y)
{
    return (d += m < 3 ? y-- : y - 2, 23 * m / 9 + d + 4 + y / 4 - y / 100 + y / 400) % 7;
}

int lataDoPonownegoUzycia(int rok) {
    int aktualnyRok = rok + 1;
    int poczatekDzien = weekDay(1, 1, rok);
    int koniecDzien = weekDay(31, 12, rok);

    for (;;) {
        int poczatekRok = weekDay(1, 1, aktualnyRok);
        int koniecRok = weekDay(31, 12, aktualnyRok);

        if (poczatekDzien == poczatekRok && koniecDzien == koniecRok) {
            return aktualnyRok - rok;
        }

        aktualnyRok++;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int rok;
        cin >> rok;
        cout << lataDoPonownegoUzycia(rok) << endl;
    }
    return 0;
}
