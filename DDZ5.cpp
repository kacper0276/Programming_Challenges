#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,licznik=0;
	cin>>a;
	int tab[a];
	for(int i=0;i<a;i++){
		cin>>tab[i];
	}
	for(int j=2;j<=a;j++){
		if((tab[j-2] + tab[j-1]) == tab[j]){
			licznik++;
		}
	}
	cout<<licznik;
}