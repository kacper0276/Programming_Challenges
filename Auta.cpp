#include <iostream>
#include <vector>

using namespace std;

struct Car {
    long long o;
    long long v;
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;

    vector<Car> cars(n + 1);
    for (int i = 1; i <= n; ++i) {
        cin >> cars[i].o >> cars[i].v;
    }

    int k;
    cin >> k;

    long long ok = cars[k].o;
    long long vk = cars[k].v;

    int overtaken_by_k = 0;
    int overtakes_k = 0;

    for (int i = 1; i <= n; ++i) {
        if (i == k) continue;

        if (ok > cars[i].o) {
            if (ok * cars[i].v < cars[i].o * vk) {
                overtaken_by_k++;
            }
        }
        else if (cars[i].o > ok) {
            if (cars[i].o * vk < ok * cars[i].v) {
                overtakes_k++;
            }
        }
    }

    cout << overtaken_by_k << " " << overtakes_k << "\n";

    return 0;
}