#include<bits/stdc++.h>
using namespace std;
int main()
{
   int wsz, mnie, wynik = 0;
   for(int i = 0; i < 4; i++){
       cin >> wsz >> mnie;
       if(wsz < 251 && wsz > 0 && mnie > 0 && mnie < 251 ){
           wynik += wsz - mnie;
       }
   }
    cout << wynik;
}