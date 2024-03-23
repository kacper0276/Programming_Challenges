#include <iostream>

using namespace std;

string gra(string napis) {
	if (napis == "nozyce") {
		return "kamien";
	} 
	else if (napis == "kamien") {
		return "papier";
	} 
	else if (napis == "papier") {
		return "nozyce";
	}
	else {
		return "przegrales";
	}
}

int main() {
	string wybor;

	cin >> wybor;

	cout << gra(wybor);

	return 0;
}