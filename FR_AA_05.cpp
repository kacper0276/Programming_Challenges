#include<bits/stdc++.h>
#define y1 0
using namespace std;
int main()
{
	int x2, y2, r, a, ile, wynik=0;
	
	cin >> a >> r;
	
	cin >> ile;
	
	while(ile--){
		cin >> x2 >> y2;
		
		float c = sqrt(pow(x2 - a, 2) + pow(y2 - y1, 2));
		
		if(c > r) wynik++;
		
	}
	
	cout << wynik;
}
