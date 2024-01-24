#include<iostream>
using namespace std;
int main()
{
	int t,liczba;
	cin>>t;
	for(int i=0;i<t;i++){
		int pom=5;
		cin>>liczba;
		int a=0;
		while(liczba>=pom){
			a+=liczba/pom;
			pom*=5;
		}
		cout<<a<<endl;
	}
	return 0;
}