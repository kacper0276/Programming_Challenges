#include <iostream>
#include <algorithm>
#include <cstring>
#include <cmath>

using namespace std;

unsigned long long int any2dec(string any, int sys) {
	reverse(any.begin(), any.end());
	int wynik = 0;
	int res;
	for (int i = 0; i < any.length(); i++) {
		if (any[i] > 64) res = any[i] - 55;
		else			res = any[i] - 48;
		wynik += res * pow(sys, i);
	}
	return wynik;
}

string dec2any(unsigned long long int dec, int sys) {
	string wynik = "";
	int res;
	while (dec) {
		res = dec % sys;
		if (res < 10) wynik += res + 48;
		else		 wynik += res + 55;
		dec /= sys;
	}
	reverse(wynik.begin(), wynik.end());
	return wynik;

}

int main() {
	unsigned long long int liczba;
	while (cin >> liczba) {
		string binary = dec2any(liczba, 2);
		reverse(binary.begin(), binary.end());
		cout << any2dec(binary, 2) << endl;
	}

	return 0;
}