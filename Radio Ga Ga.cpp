#include <iostream>

using namespace std;

int main() {
	string ostatnia = "", obecna;
	int n;
	bool mama = false, exist = false;

	cin >> n;

	cin >> obecna;
	ostatnia = obecna;
	n--;

	while (n--) {
		cin >> obecna;

		if (obecna == "ma" && ostatnia == "ma" && !exist) {
			mama = true;
			exist = true;
		} 

		if (obecna == "ta" && ostatnia == "ta" && !exist) {
			exist = true;
		}

		ostatnia = obecna;
	}

	if (mama) {
		cout << "mama";
	}
	else {
		cout << "tata";
	}

	return 0;
}