#include <iostream>
#include <map>
#include <string>
#include <math.h>

using namespace std;

int sumaElZMapy(map<char, int> mapa) {
	int suma = 0;

	for (auto& el : mapa) {
		suma += el.second;
	}

	return suma;
}

map<char, int> licz(string napis) {
	map<char, int> mapa;

	for (int i = 65; i <= 90; i++) {
		mapa[char(i)] = 0;
	}

	for (auto& el : napis) {
		if (el == ' ') {
			continue;
		}
		else {
			mapa[el]++;
		}
	}

	return mapa;
}

map<char, int> liczProcenty(map<char, int> mapa) {
	int suma = sumaElZMapy(mapa);
	map<char, int> mapaProcent;

	for (auto& el : mapa) {
		int procent = round((double(el.second) / double(suma)) * 100);
		mapaProcent[el.first] = procent;
	}

	return mapaProcent;
}

int main() {
	string napis;

	getline(cin, napis);
	
	map<char, int> mapa = liczProcenty(licz(napis));

	for (auto& el : mapa) {
		cout << el.first;
		for (int i = 0; i < el.second; i++) {
			cout << "*";
		}
			cout << endl;
	}

	return 0;
}