#include <iostream>

using namespace std;

int p;
int c(int n,int p);
int main()
{
    int ile,n,wynik;


    cin>>ile;
    while(ile--)
    {
        p =0;
        cin>>n;
        wynik=c(n,p);
        cout<<wynik<<endl;;
    }
    return 0;
}
int c(int n,int p)
{

    if(n==1)return p;
    else if(n%2==0)
    {
        p++;
        return c(n/2,p);
    }
    else if(n%2==1)
    {
        p++;
        return c(3*n+1,p);
    }

}