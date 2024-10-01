#include <iostream>
#include <vector>

using namespace std;

int longestArithmeticSubsequence(const vector<int>& arr) {
    if (arr.size() < 2) return arr.size();

    int maxLength = 1;
    int currentLength = 1;
    int commonDifference = arr[1] - arr[0];

    for (size_t i = 1; i < arr.size(); ++i) {
        int difference = arr[i] - arr[i - 1];

        if (difference == commonDifference) {
            currentLength++;
        } else {
            commonDifference = difference;
            currentLength = 2;
        }
        
        maxLength = max(maxLength, currentLength);
    }

    return maxLength;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }

        cout << longestArithmeticSubsequence(arr) << endl;
    }

    return 0;
}
