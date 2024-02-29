    #include <iostream>
    #include <vector>

    using namespace std;

    bool czy_palindrom(vector<int> tab)
    {
        int i = 0, j = tab.size() - 1;

        while (i < j)
        {
            if (tab[i] != tab[j]) 
                return false;

            ++i;
            --j; 
        }

        return true; 
    }


    // k - różne znaki co ile;
    vector<int> generuj_palindrom(int n, int k) {
        vector<int> palindrom;
        int actualDiff = 1;

        palindrom.push_back(9);

        for (int i = 1; i < n; i++) {
            if (actualDiff < k) {
                int num = palindrom[i - 1] - 1;
                palindrom.push_back(num);
                actualDiff++;
            }
            else {
                actualDiff = 1;
                palindrom.push_back(9);
            }
        }

        return palindrom;
    }

    int main() {
        int n, k;
        cin >> n >> k;

        vector<int> wynik = generuj_palindrom(n, k);

        if (!czy_palindrom(wynik)) {
            cout << "NIE\n";
        }
        else {
            for (int cyfra : wynik) {
                cout << cyfra;
            }
        }

        return 0;
    }