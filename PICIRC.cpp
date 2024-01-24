#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int x, y,r ;
    cin>>x>>y>>r;
    int punkty;
    cin>>punkty;
    while(punkty--)
    {
        int a, b;
        cin>>a>>b;
        int p, q;
        p=x-a;
        q=y-b;
        if (p*p + q*q > r*r) 
        {
            cout<<"O"<<endl;
        }
        else if ( p*p + q*q < r*r)
        {
            cout<<"I"<<endl;
        }
        else
        {
            cout<<"E"<<endl;
        }
    }
    return 0;
}