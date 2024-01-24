#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int a,b;
        cin>>a>>b;
        int reszta=a%b;
        if(reszta<0 && b>0)
        reszta+=b;
        else if(reszta<0 && b<0)
        reszta+=-b;
        cout<<reszta<<endl;
    }
    return 0;
}