#include <iostream>
using namespace std;
int main() {
    int a, b, d;
    cin >> d;
    bool cokolwiekWypisano;
    for (int i = 0; i < d; i++) {
        cokolwiekWypisano = false;
        cin >> a >> b;
        for (int j = a + 1; j < b; j++)
            if (j % 2 == 0) {
                cout << j << ' ';
                cokolwiekWypisano = true;
            }
        if(!cokolwiekWypisano)
            cout << "BRAK" << endl;
    }
    return 0;
}
