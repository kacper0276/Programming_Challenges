#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x,y;
	string wynik="";
	cin>>x>>y;
	for(int i=x;i<=y;i++){
		if(i%6==0){
		wynik+="ab";
	}
	if(i%3==0 && i%2!=0){
		wynik+="b";
	}
	if(i%2==0 && i%3!=0){
		wynik+="a";
	}
	}
	cout<<wynik<<"\n";
	return 0;
}