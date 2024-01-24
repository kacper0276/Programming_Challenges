#include <iostream>
#include <cmath>
 
using namespace std;
 
 
 
int main()
{
    int ile;
    cin>> ile;
    for (int i=1;i<=ile;i++)
    {
        double suma=0,x,y;
        int obzartuchy, pudelkociastek;
        cin>>obzartuchy;
        cin>>pudelkociastek;
        int*tab;
        tab=new int [obzartuchy];
 
 
        for(int j=0;j<obzartuchy;j++)
        {
            cin>>tab[j];
 
            x=86400/tab[j];
            y=x/pudelkociastek;
            suma+=y;
        }
        cout<<ceil(suma)<<endl;
        delete[]tab;
 
 
    }
 
    return 0;
}
