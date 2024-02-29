#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Funkcja zwracająca indeks maksymalnej liczby w tablicy
int indexMax(const vector<int>& arr) {
    int maxIndex = -1;
    int maxVal = -2147483648;

    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] >= maxVal) {
            maxVal = arr[i];
            maxIndex = i;
        }
    }

    return maxIndex;
}

// Funkcja zwracająca indeks sąsiada o większej wartości
int maxIndexSasiad(const vector<int>& arr, int i) {
    if (i == 0) {
        return (arr[i + 1] >= arr[i]) ? i + 1 : i;
    }
    else if (i == arr.size() - 1) {
        return (arr[i - 1] >= arr[i]) ? i - 1 : i;
    }
    else {
        return (arr[i + 1] >= arr[i - 1]) ? i + 1 : i - 1;
    }
}

// Funkcja sprawdzająca, czy istnieją sąsiedzi lub to pierwszy ruch
bool saSasiedziLubPierwszyRuch(const vector<int>& arr, int i) {
    return (i == 0 && arr[i + 1] != -2147483648) || (i == arr.size() - 1 && arr[i - 1] != -2147483648) ||
        (arr[i + 1] != -2147483648 || arr[i - 1] != -2147483648);
}

// Funkcja sprawdzająca, czy gra nadal trwa
bool czyNadalGra(const vector<int>& arr) {
    return any_of(arr.begin(), arr.end(), [](int val) { return val != -2147483648; });
}

int main() {
    int n;
    int liczba;

    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; ++i) {
        cin >> liczba;
        arr[i] = liczba;
    }

    // GRA
    bool lukaszTurn = true;
    int lukasz = 0, piotrek = 0;
    int lastIndex = -1;
    int l;

    while (czyNadalGra(arr)) {
        if (lukaszTurn) {
            l = (lastIndex == -1) ? indexMax(arr) : (saSasiedziLubPierwszyRuch(arr, lastIndex) ? maxIndexSasiad(arr, lastIndex) : indexMax(arr));
            lukasz += arr[l];
        }
        else {
            l = (saSasiedziLubPierwszyRuch(arr, lastIndex)) ? maxIndexSasiad(arr, lastIndex) : indexMax(arr);
            piotrek += arr[l];
        }

        lastIndex = l;
        arr[l] = -2147483648;
        lukaszTurn = !lukaszTurn;
    }

    cout << lukasz << " " << piotrek;
    return 0;
}
