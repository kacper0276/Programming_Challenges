#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int p=0;
	string f,n,t;
	cin>>f;
	if(f=="SZYFRUJ"){
		cin>>n>>t;
		for(int i=0;i<t.size();i++){
			if(p==n.size()){
				p=0;
			}
			t[i]+=n[p]-48;
			if(t[i]>90){
				t[i]-=26;
			}
			cout<<t[i];
			p++;
		}
	}
	if(f=="DESZYFRUJ"){
		cin>>n>>t;
		for(int i=0;i<t.size();i++){
			if(p==n.size()){
				p=0;
			}
			t[i]-=n[p]-48;
			if(t[i]<65){
				t[i]+=26;
			}
			cout<<t[i];
			p++;
		}
	}
	return 0;
}