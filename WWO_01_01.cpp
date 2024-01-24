#include<bits/stdc++.h>
using namespace std;

int ch = 0, dz = 0;

void czyKobieta(string imie){
	int dl = imie.length();
	
	char ostatni = imie[dl-1];
	
	if(ostatni == 'a'){
		dz++;
	}
	
	else {
		ch++;
	}
}

int main()
{
	int a, b, c;
	string taba[30], tabb[30], tabc[30];
	
	
	cin >> a >> b >> c;

	
	for(int i = 0; i < a; i++){
		cin >> taba[i];
		
		czyKobieta(taba[i]);
	}
	
	for(int i = 0; i < b; i++){
		cin >> tabb[i];
		
		czyKobieta(tabb[i]);
	}
	
	for(int i = 0; i < c; i++){
		cin >> tabc[i];
		
		czyKobieta(tabc[i]);
	}
	
	int roznica = abs(ch - dz);
	
	cout << abs(dz - roznica);
	
}
