#include <iostream>
#include <map>

using namespace std;

int main() {
    map<int, int> zliczenia;
    int x;

    while (cin >> x) {
        zliczenia[x]++;
    }

    for (auto para : zliczenia) {
        if (para.second % 3 != 0) {
            cout << para.first << endl;
            break;
        }
    }

    return 0;
}