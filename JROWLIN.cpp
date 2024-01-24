#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double a, b, c;
    for(;cin>>a>>b>>c;)
    {
        if(a==0 && (c-b)==0)
        {
            cout<<"NWR"<<endl;
            continue;
        }
        if(a==0 && (c-b)>0)
        {
            cout<<"BR"<<endl;
            continue;
        }
        if((c-b)==0)
        {
            cout<<"NWR"<<endl;
            continue;

        }
        else
        {
            cout<<fixed;
            cout<<setprecision(2)<<(c-b)/a<<endl;
            continue;
        }
    }
    return 0;
}