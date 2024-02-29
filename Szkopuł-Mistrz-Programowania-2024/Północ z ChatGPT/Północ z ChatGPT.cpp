#include <iostream>
#include <vector>

using namespace std;

pair<int, int> mostClose(vector<pair<int, int>> res) {
	int godzina = 2147483647, minuty = 2147483647;
	int max = 2147483647;

	for (auto& napis : res) {
		int h = napis.first;
		int m = napis.second;

		int czas = (h % 12) * 60 + m;

		int roznica = abs(czas);

		if (roznica < max) {
			godzina = h;
			minuty = m;
			max = roznica;
		}
	}

	return make_pair(godzina, minuty);
}

int main() {
	int n, h, m;
	vector<pair<int, int>> res;

	cin >> n;

	while (n--) {
		cin >> h >> m;
		res.push_back(make_pair(h, m));
	}

	pair<int, int> result = mostClose(res);

	cout << result.first << " " << result.second;
}