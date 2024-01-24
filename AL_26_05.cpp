#include<bits/stdc++.h>
using namespace std;
int main()
{
	string a;
	getline(cin,a);
	for(int i=0;i<a.length();i+=2){
		cout<<a[i];
	}
	int w;
	if(a.length()%2){
		w=2;
	}
	else{
		w=1;
	}
	for(int i=a.length()-w;i>0;i-=2){
		cout<<a[i];
	}
	return 0;
}