#include<bits/stdc++.h>
using namespace std;
int main()
{
	string b;
	int a,n,ln;
	cin>>n;
	while(n--){
		cin>>b;
		a=0;
		ln=b.length();
		for(int i=0;i<ln;++i){
			a*=2;
			a+=(int)b[i]-48;
			a%=10;
		}
		if(!a){
			cout<<"Tak\n";
		}
		else{
			cout<<"Nie\n";
		}
	}
}