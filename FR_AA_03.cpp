#include<bits/stdc++.h>
using namespace std;
int main()
{
	string znaki, wynik="";
	int zmienna = 0;
	
	cin >> znaki;
	
	int dlugosc = znaki.length();
	
	for(int i = 0; i <= dlugosc; i++){
		if(znaki[i] == '+') zmienna++;
		else if (znaki[i] == '-') zmienna--;
		
		if(zmienna == 3){
			 wynik+="5 ";
			 zmienna = 0;
		}
		
		if(zmienna == -3){
			wynik+="1 ";
			zmienna = 0;
		}
	}
	
	if(wynik==""){
		cout << "BRAK";
	}
	
	else {
		cout << wynik;
	}
	
}

