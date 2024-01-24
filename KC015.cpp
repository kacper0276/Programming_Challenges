#include<iostream>
#include<cstring>
using namespace std;
	bool funkcja(long double a, string znak, long double b){
		if(znak=="=="){
		if(a==b){
			return 1;
		}
		else 
		return 0;
	}
	else if(znak=="!="){
		if(a!=b){
			return 1;
		}
		else 
		return 0;
	}
	else if(znak=="<="){
		if(a<=b){
			return 1;
		}
		else 
		return 0;
	}
	else if(znak==">="){
		if(a>=b){
			return 1;
		}
		else
		return 0;
	}

}
int main()
{
	string znak;
	long double a,b;
	while(cin>>a>>znak>>b){
	cout<<funkcja(a,znak,b)<<endl;
}
}