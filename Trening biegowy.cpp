#include <iostream>

using namespace std;

int main() {
    int d;
    if (cin >> d) {
        for (int i = 0; i < d; ++i) {
            int n;
            int hh, mm, ss;
            char c1, c2;

            cin >> n >> hh >> c1 >> mm >> c2 >> ss;

            int total_seconds = hh * 3600 + mm * 60 + ss;
            int X = total_seconds * 1000;

            int q = X / n;
            int r = X % n;

            if (2 * r >= n) {
                q = q + 1;
            }

            int mins = q / 60;
            int secs = q % 60;

            if (secs < 10) {
                cout << mins << ":0" << secs << "\n";
            }
            else {
                cout << mins << ":" << secs << "\n";
            }
        }
    }
    return 0;
}