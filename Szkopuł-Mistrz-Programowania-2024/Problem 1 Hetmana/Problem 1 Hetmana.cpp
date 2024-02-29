#include<iostream>
#include <cmath>
using namespace std;
int main() {
	long long hx, hy, sx, sy;
	cin >> hx >> hy;
	cin >> sx >> sy;
	int lr = 0;
	if (hx == sx && hy == sy) {
		cout << "0";
	}

	else if ((hx == sx || hy == sy) || (abs(hx - sx) == abs(hy - sy))) {
		cout << "1";
	}

	else {
		cout << "2";
	}
}