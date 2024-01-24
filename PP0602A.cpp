#include <iostream>
using namespace std;

int main() {
	
	int a,b;
	cin>>a;
	for(int i=0;i<a;i++)
	{
		cin>>b;
		int tab[b];
		for(int j=0;j<b;j++)
	{
		cin>>tab[j];
	}
	
	for(int j=1;j<b;j+=2)
	{
		cout<<tab[j]<<" ";
	}
	for (int j=0;j<b;j+=2)
	{
		cout<<tab[j]<<" ";
	}
	cout<<endl;
	}
	return 0;
}

