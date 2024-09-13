#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    long long liczba;
    
    for (int i = 0; i < n; i++) {
        cin >> liczba;
        
        if (liczba % 2 == 0) {
            cout << liczba << " ";
        } else {
            cout << liczba * 2 << " ";
        }
    }

    return 0;
}