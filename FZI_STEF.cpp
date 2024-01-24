#include <iostream>
using namespace std;
int main() {
    int a, b;
    long long suma=0, maks=0;
    cin >> a;
    while (a--){
            cin >> b;
            suma+=b;
            if (suma>maks){
                maks=suma;
            }
            if (suma<0){
                suma=0;
            }
        }
        cout << maks << endl;
    return 0;  
}
