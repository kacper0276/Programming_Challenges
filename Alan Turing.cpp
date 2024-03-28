#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;

    string napis = "";

    for (int i = 0; i < n; i++) {
        string instrukcja;
        cin >> instrukcja;

        if (instrukcja == "DODAJ") {
            char litera;
            cin >> litera;
            napis += litera;
        }
        else if (instrukcja == "USUN") {
            int liczbaZnakow;
            cin >> liczbaZnakow;
            if (liczbaZnakow > napis.length()) {
                napis = "";
            }
            else {
                napis.erase(napis.length() - liczbaZnakow, liczbaZnakow);
            }
        }
        else if (instrukcja == "ZAMIEN") {
            char litera;
            cin >> litera;
            if (!napis.empty()) {
                napis[napis.length() - 1] = litera;
            }
        }
    }

    cout << napis << endl;

    return 0;
}
