#include<iostream>
#include<cstring>
using namespace std;
string DzienTygodnia(int a){
	if(a==0) return "Pn";
	if(a==1) return "Wt";
	if(a==2) return "Sr";
	if(a==3) return "Cz";
	if(a==4) return "Pt";
	if(a==5) return "So";
	if(a==6) return "Nd";
}

int numerTygodnia(string a){
	if(a=="Pn") return 0;
	if(a=="Wt") return 1;
	if(a=="Sr") return 2;
	if(a=="Cz") return 3;
	if(a=="Pt") return 4;
	if(a=="So") return 5;
	if(a=="Nd") return 6;
}

int main()
{
	int n,t;
	string dzien;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>dzien>>t;
		cout<<DzienTygodnia((numerTygodnia(dzien)+t)%7)<<"\n";
	}
	return 0;
}