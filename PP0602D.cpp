#include <iostream>
using namespace std;
int main()
{
    int a, b;
    int tab[100000];
    cin>>a>>b;
    for(int i=0; i<a; i++)
    {
        cin>>tab[i];
    }
    for(int i=b; i<a; i++)
    {
        cout<<tab[i]<<" ";
    }
    for(int i=0; i<b; i++)
    {
        cout<<tab[i]<<" ";
    }
    return 0;
}