#include<bits/stdc++.h>
using namespace std;
int main()
{
	string liczba;
	cin >> liczba;
	int x = liczba.length();
	if(x>3){
		for(int i = 0; i < x; i++){
		if(liczba[i] == '0'){
			for( int j = x; j > 0; j--){
				if(liczba[j] == '1'){
					for(int a = i+1; a<j; a++){
						cout<<liczba[a];
					}
					return 0;
				}
			}
		}
	}
	}
		cout << "PUSTY";
}

