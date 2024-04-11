#include <iostream>
#include <cmath>

using namespace std;

int main() {
	// wzrost obecny, wymagany, o ile wzrasta
	int k, w, m;
	cin >> k >> w >> m;
	
	int roznica = w - k;
	int uderzenia = (int)ceil((double)roznica / m);

	cout << uderzenia;

	return 0;
}