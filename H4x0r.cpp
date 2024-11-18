#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
	string n;
	cin >> n;

	replace(n.begin(), n.end(), 'e', '3');
	replace(n.begin(), n.end(), 'a', '4');
	replace(n.begin(), n.end(), 'i', '1');
	replace(n.begin(), n.end(), 'o', '0');
	replace(n.begin(), n.end(), 's', '5');

	cout << n;

	return 0;
}