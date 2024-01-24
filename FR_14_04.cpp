#include<bits/stdc++.h>
using namespace std;
int main()
{
	string jas, stas;
	int wynj = 0, wyns = 0;
	
	cin >> jas >> stas;
	
	for(int i = 0; i < jas.length(); i++) {
		if(jas[i] == '2') wynj += 2;
		else if(jas[i] == '3') wynj += 3;
		else if(jas[i] == '4') wynj += 4;
		else if(jas[i] == '5') wynj += 5;
		else if(jas[i] == '6') wynj += 6;
		else if(jas[i] == '7') wynj += 7;
		else if(jas[i] == '8') wynj += 8;
		else if(jas[i] == '9') wynj += 9;
		else if(jas[i] == 'T') wynj += 10;
		else if(jas[i] == 'J') wynj += 11;
		else if(jas[i] == 'Q') wynj += 12;
		else if(jas[i] == 'K') wynj += 13;
		else if(jas[i] == 'A') wynj += 14;	
	}
	
	for(int i = 0; i < stas.length(); i++) {
		if(stas[i] == '2') wyns += 2;
		else if(stas[i] == '3') wyns += 3;
		else if(stas[i] == '4') wyns += 4;
		else if(stas[i] == '5') wyns += 5;
		else if(stas[i] == '6') wyns += 6;
		else if(stas[i] == '7') wyns += 7;
		else if(stas[i] == '8') wyns += 8;
		else if(stas[i] == '9') wyns += 9;
		else if(stas[i] == 'T') wyns += 10;
		else if(stas[i] == 'J') wyns += 11;
		else if(stas[i] == 'Q') wyns += 12;
		else if(stas[i] == 'K') wyns += 13;
		else if(stas[i] == 'A') wyns += 14;
	}
	
	if(wynj > wyns) cout << "JASIO";
	else if(wynj < wyns) cout << "STASIO";
	else cout << "REMIS";
}
