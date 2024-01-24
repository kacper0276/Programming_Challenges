#include<bits/stdc++.h>
using namespace std;
int main()
{
	int z=100;
	string wers;
	while(z--){
		getline(cin, wers);
		for(int i = 0; i < wers.length(); i++){
			if(wers[i] == 65 || wers[i] == 97){
				cout << ".-/";
			}
			else if(wers[i] == 66 || wers[i] == 98){
				cout << "-.../";
			}
			else if(wers[i] == 67 || wers[i] == 99){
				cout << "-.-./";
			}
			else if(wers[i] == 68 || wers[i] == 100){
				cout << "-../";
			}
			else if(wers[i] == 69 || wers[i] == 101){
				cout << "./";
			}
			else if(wers[i] == 70 || wers[i] == 102){
				cout << ".-../";
			}
			else if(wers[i] == 71 || wers[i] == 103){
				cout << "--./";
			}
			else if(wers[i] == 72 || wers[i] == 104){
				cout << "..../";
			}
			else if(wers[i] == 73 || wers[i] == 105){
				cout << "../";
			}
			else if(wers[i] == 74 || wers[i] == 106){
				cout << ".---/";
			}
			else if(wers[i] == 75 || wers[i] == 107){
				cout << "-.-/";
			}
			else if(wers[i] == 76 || wers[i] == 108){
				cout << "..-./";
			}
			else if(wers[i] == 77 || wers[i] == 109){
				cout << "--/";
			}
			else if(wers[i] == 78 || wers[i] == 110){
				cout << "-./";
			}
			else if(wers[i] == 79 || wers[i] == 111){
				cout << "---/";
			}
			else if(wers[i] == 80 || wers[i] == 112){
				cout << ".--./";
			}
			else if(wers[i] == 81 || wers[i] == 113){
				cout << "--.-/";
			}
			else if(wers[i] == 82 || wers[i] == 114){
				cout << ".-./";
			}
			else if(wers[i] == 83 || wers[i] == 115){
				cout << ".../";
			}
			else if(wers[i] == 84 || wers[i] == 116){
				cout << "-/";
			}
			else if(wers[i] == 85 || wers[i] == 117){
				cout << "..-/";
			}
			else if(wers[i] == 86 || wers[i] == 118){
				cout << "...-/";
			}
			else if(wers[i] == 87 || wers[i] == 119){
				cout << ".--/";
			}
			else if(wers[i] == 88 || wers[i] == 120){
				cout << "-..-/";
			}
			else if(wers[i] == 89 || wers[i] == 121){
				cout << "-.--/";
			}
			else if(wers[i] == 90 || wers[i] == 122){
				cout << "--../";
			}
			else if(wers[i] == 32){
				cout << "/";
			}
			
		}
		cout << "\n";
	}
}