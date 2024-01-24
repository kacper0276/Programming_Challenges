#include<bits/stdc++.h>
using namespace std;
int main()
{
	int liczba, Z=10;
	while(Z--){
		int suma=0;
		cin >> liczba;
		for(int i = 0; i <= liczba; i++){
			suma+=i;
		}
		cout << suma << "\n";
	}
}