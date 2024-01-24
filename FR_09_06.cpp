#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	string napis;
	char blisko = 'Z', daleko='A';
	
	cin >> n;
	
	while (n--) {
		
		cin >> napis;
		
		for(int i = 0; i < napis.length(); i++){
			if(napis[i] < blisko) blisko = napis[i];
			
			if(napis[i] > daleko) daleko = napis[i];
		}
		cout << daleko - blisko << endl;
		
		blisko = 'Z';
		daleko = 'A';
	}
}
