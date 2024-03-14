#include <iostream>
#include <map>
#include <algorithm>
#include <vector>

using namespace std;

bool czyTaRodzina(string wyraz, string rodzina) {
	sort(wyraz.begin(), wyraz.end());
	return wyraz == rodzina;
}

int main() {
	map<string, int> mapa;
	vector<string> wyrazy;
	int max = 0;
	string rodzina = "";
	string napis;
	int n;
	cin >> n;

	while (n--) {
		cin >> napis;
		wyrazy.push_back(napis);
		sort(napis.begin(), napis.end());
		mapa[napis]++;
		if (mapa[napis] > max) {
			max = mapa[napis];
			rodzina = napis;
		}
	}

	for (auto& el : wyrazy) {
		if (czyTaRodzina(el, rodzina)) {
			cout << el << endl;
		}
	}

	return 0;
}