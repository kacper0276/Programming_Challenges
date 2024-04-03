#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        int n;
        cin >> n;
        bool flag = true;
        int aIN = 0, bIN = 0;
        vector<string> tab(n);

        for (int z = 0; z < n; ++z) {
            cin >> tab[z];
        }

        for (int j = 0; j < n; ++j) {
            if (tab[j] == "AI") {
                aIN += 1;
            }
            else if (tab[j] == "AO") {
                bIN -= 1;
            }
            else if (tab[j] == "BI") {
                bIN += 1;
            }
            else if (tab[j] == "BO") {
                aIN -= 1;
            }

            if (aIN < 0 || bIN < 0) {
                flag = false;
                break;
            }
        }

        if (flag) {
            cout << aIN + bIN << endl;
        }
        else {
            cout << "ERROR" << endl;
        }
    }

    return 0;
}
