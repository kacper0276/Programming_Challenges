#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int main() {
    string line;

    while (getline(cin, line)) {
        stringstream ss(line);
        int j;
        ss >> j;

        vector<int> numbers;
        int number;
        while (ss >> number) {
            numbers.push_back(number);
        }

        set<int> uniqueNumbers(numbers.begin(), numbers.end());
        vector<int> sortedNumbers(uniqueNumbers.begin(), uniqueNumbers.end());
        
        sort(sortedNumbers.begin(), sortedNumbers.end(), greater<int>());
        
        if (j > 0 && j <= sortedNumbers.size()) {
            cout << sortedNumbers[j - 1] << endl;
        } else {
            cout << "-" << endl;
        }
    }

    return 0;
}
