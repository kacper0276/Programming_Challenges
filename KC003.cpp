#include <iostream>
using namespace std;
int main()
{
    double a, b, c;
    for(;cin>>a>>b>>c;)
    {
        if((a+b)>c && (a+c)>b && (b+c)>a && a>0 && b>0 && c>0)
        {
            cout<<1<<endl;
        }
        else
        {
            cout<<0<<endl;
        }
    }
    return 0;
}