#include <iostream>
using namespace std;
int main()
{
    int a, b;
    int tab [300][300];

 cin>>a>>b;
 
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            cin>>tab[i][j];
        }
    }
    for(int i=0;i<b;i++)
    {
        for(int j=0;j<a;j++)
        {
            cout<<tab[j][i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}