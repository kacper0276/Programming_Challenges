#include <iostream>
using namespace std;
int main()
{
    int testy;
    cin>>testy;
    while(testy--)
    {
        unsigned long long int n, kwadraty=0;
        cin>>n;
        kwadraty = ((2*n+1)*(n+1)*n)/6; 
        cout<<kwadraty<<"\n";
    }
    return 0;
}