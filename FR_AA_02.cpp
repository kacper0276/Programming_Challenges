#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,rok;
    cin >> n >> rok;
    if(rok > 1921 && rok < 2021 && n > 0){
        int l = n%10;
        int wynik = l * 2;
        wynik = wynik + 5;
        wynik = wynik * 50;
        wynik = wynik + 1771;
        wynik = wynik - rok;
        wynik = wynik % 100;
        cout << wynik << "\n";
    }
}