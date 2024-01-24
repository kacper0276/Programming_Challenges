#include<bits/stdc++.h>
using namespace std;
int main()
{
	double a, b, x1, x2, y1, y2, wynik;
	
	cin >> a; 
	
	while (a--){
		cin >> b;
		wynik = 0;
		cin >> x1 >> y1;
		b--;
		while (b--){
			cin >> x2 >> y2;
			wynik += sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
			
			x1 = x2;
			y1 = y2;
		}
		cout << fixed << setprecision(2) << wynik/1000 << endl;
	}
}
