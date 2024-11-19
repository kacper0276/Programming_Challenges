#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> prices(n);
    for (int i = 0; i < n; ++i) {
        cin >> prices[i];
    }

    int min_price = prices[0];
    int max_profit = 0;

    for (int i = 1; i < n; ++i) {
        int profit = prices[i] - min_price;

        max_profit = max(max_profit, profit);

        min_price = min(min_price, prices[i]);
    }

    cout << max_profit << endl;
    return 0;
}
