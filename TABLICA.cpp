#include <iostream>
using namespace std;

int main() {
	
	int a,i=0;
	int tab[1000];
	while(cin>>a)
	{
		tab[i]=a;
		i++;
	}
	for(i=i-1;i>=0;i--)
	cout<<tab[i]<<" ";
	return 0;
}