#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <numeric>

using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

void ex1(int* tab) {
    vector<int> results;

    for (int i = 0; i < 200; i++) {
        if (tab[i] < 1000)
            results.push_back(tab[i]);
    }

    cout << results.size() << " "
        << results[results.size() - 2] << " "
        << results[results.size() - 1] << endl;
}

vector<int> findDivisors(int n) {
    vector<int> divisors;
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            divisors.push_back(i);
            if (i != n / i)
                divisors.push_back(n / i);
        }
    }
    sort(divisors.begin(), divisors.end());
    return divisors;
}

void ex2(int* tab) {
    for (int i = 0; i < 200; i++) {
        vector<int> divisors = findDivisors(tab[i]);
        if (divisors.size() == 18) {
            cout << tab[i] << ": ";
            for (int d : divisors)
                cout << d << " ";
            cout << endl;
        }
    }
}

bool isRelativelyPrime(int num, const vector<int>& otherNumbers) {
    for (int other : otherNumbers) {
        if (gcd(num, other) != 1)
            return false;
    }
    return true;
}

void ex3(int* tab) {
    vector<int> numbers(tab, tab + 200);
    int maxRelativelyPrime = -1;

    for (int i = 0; i < 200; i++) {
        vector<int> others(numbers.begin(), numbers.end());
        others.erase(others.begin() + i);
        if (isRelativelyPrime(tab[i], others)) {
            maxRelativelyPrime = max(maxRelativelyPrime, tab[i]);
        }
    }

    cout << maxRelativelyPrime << endl;
}

int main() {
    int exNum;
    int* tab = new int[200];
    cin >> exNum;

    for (int i = 0; i < 200; i++) {
        cin >> tab[i];
    }

    switch (exNum) {
    case 1:
        ex1(tab);
        break;
    case 2:
        ex2(tab);
        break;
    case 3:
        ex3(tab);
        break;
    default:
        break;
    }

    delete[] tab;
    return 0;
}