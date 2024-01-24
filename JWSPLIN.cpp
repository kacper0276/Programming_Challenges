#include <iostream>
using namespace std;
int main()
{
	int t,a11,a12,a21,a22,a31,a32,det;
    cin>>t;
    for(int i=0; i<t; i++)
    {
    cin>>a11>>a12>>a21>>a22>>a31>>a32;
    det=a11*a22+a12*a31+a21*a32-(a22*a31+a11*a32+a12*a21); // metoda Sarrusa
    if(det==0) cout<<"TAK"<<endl;
    else cout<<"NIE"<<endl;
    det=0;
    }
    return 0;
}