#include <iostream>
using namespace std;
long long pokroj( long long x)
{
    long long kawalki=1;
    int ciecia=1;
    while(kawalki<x)
    {
        kawalki+=ciecia;
        ciecia++;
    }
    return ciecia-1;
}

int main()
{
    long long x;
    while(cin>>x)
    {
        cout<<pokroj(x)<<endl;
    }
}