#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool includes(vector<int> vec, int x) {
	for (auto el : vec) {
		if (el == x)
			return true;
	}
	
	return false;
}

vector<int> funkcja(vector<vector<int>> obs, int size) {
	vector<int> rozwiązanie(size, 0);

	for (int i = 1; i < obs.size(); i++) {
		for (int j = 0; j < obs[i].size(); j++) {
			int num = obs[i][j];
			if (!includes(obs[num], i)) {
				rozwiązanie[num - 1] = rozwiązanie[num - 1]++;
			}
		}
	}

	return rozwiązanie;
}

int main() {
	int n, m, a, b;
	

	cin >> n >> m;

	if (1 > n || n > 100000) {
		return 0;
	}

	if (0 > m || m > 300000) {
		return 0;
	}

	vector<vector<int>> obs(n + 1);

	while (m) {
		cin >> a >> b;
		if (1 <= a && 1 <= b && a <= n && b <= n) {
			obs[a].push_back(b);
			m--;
		}
	}

	vector<int> rozwiazanie = funkcja(obs, n);
	string res = "";

	for (auto el : rozwiazanie) {
		res += to_string(el) + " ";
	}

	cout << res;
}