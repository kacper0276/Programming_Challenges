#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        int tab[n];
        for(int j=0;j<n;j++)
        {
            unsigned int x;
            cin>>x;
            tab[j]=x;
        }
        int dni=-1;
        dni+=n;
        for(int j=0;j<n;j++)
        dni+=tab[j];
        cout<<dni<<endl;
    }
    return 0;
}