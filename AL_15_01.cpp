#include<bits/stdc++.h>
using namespace std;
int main()
{
	string a;
	string b;
	string c;
	int wynik=0;
	getline(cin,a);
	getline(cin,b);
	getline(cin,c);
	int max=min(a.size(), min(b.size(), c.size()));
	for(int i=0;i<max;i++){
		if((a[i] == b[i] && a[i]!=c[i]) || (a[i]!=b[i] && a[i]==c[i])){
			wynik++;
		}
		else if(a[i]!=b[i] && b[i]==c[i]){
			wynik=wynik+2;
		}
		else if(a[i]!=b[i] && b[i]!=c[i]){
			wynik++;
		}
	}
	cout<<wynik<<"\n";
	return 0;
}

