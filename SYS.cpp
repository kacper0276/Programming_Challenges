#include <iostream>

using namespace std;

void jedenastkowy(int a)
{
    int W=0, Tablica[1000];
        while(a)
        {
            Tablica[W] = a%11;
            a/=11;
            W++;
        }
        for(int i=W-1; i>=0; i--)
        {
            if(Tablica[i] < 10) cout<<Tablica[i];
            else cout<<"A";
        }
}
void szestnastkowy(int l)
{
    int w=0, tablica[1000];
        while(l)
        {
            tablica[w] = l%16;
            l/=16;
            w++;
        }
        for(int i=w-1; i>=0; i--)
        {
            if(tablica[i] < 10) cout<<tablica[i];
            else switch(tablica[i])
            {
            case 10:
                cout<<"A";
            break;
            case 11:
                cout<<"B";
            break;
            case 12:
                cout<<"C";
            break;
            case 13:
                cout<<"D";
            break;
            case 14:
                cout<<"E";
            break;
            case 15:
                cout<<"F";
            break;
            }
        }
        cout<<" ";
}
int main()
{
    int t, n;
    cin>>t;
    while(t--){
        cin>>n;
       szestnastkowy(n); 
	   jedenastkowy(n);
	   cout<<endl;
    }
    return 0;
}
