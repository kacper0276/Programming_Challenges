#include<bits/stdc++.h>
using namespace std;
int main()
{
	string napis;
	
	cin >> napis;
	
	for(int i = 0; i < napis.length(); i++) {
		if(napis[i] == 's'){
			if(napis[i + 1] == 't') {
				if(napis[i + 2] == 'o') {
					cout << "TAK";
					return 0;
				}
			}
		}
	}
	cout << "NIE";
}
