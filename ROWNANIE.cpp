#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    double a, b, c, d;
    int wyjscie;
    for(;cin>>a>>b>>c;)
    {
        wyjscie=0;
        d=(b*b)-(4*a*c);
        if (d==0)
        {
            ++wyjscie;
        }
        if (d>0)
        {
            wyjscie+=2;
        }
        cout<<wyjscie<<endl;
    }
    return 0;
}