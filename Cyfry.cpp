#include <iostream>

using namespace std;

int main() {
	int t;
	string pierwsza = "- 1", ostatnia = "-1";
	string napis;
	cin >> t;

	while (t--) {
		cin >> napis;

		for (auto& el : napis) {
			if (el >= '0' && el <= '9' && pierwsza == "- 1") {
				pierwsza = el;
			}
			else if (el >= '0' && el <= '9' && pierwsza != "- 1") {
				ostatnia = el;
			}
		}

		if (pierwsza != "- 1" && ostatnia != "- 1") {
			cout << pierwsza << " " << ostatnia << endl;
		}
		else {
			cout << "BRAK" << endl;
		}

		pierwsza = "- 1", ostatnia = "- 1";
	}

	return 0;
}