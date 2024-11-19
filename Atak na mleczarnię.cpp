#include <iostream>
#include <string>

using namespace std;

bool is_digits(string& str)
{
    for (char ch : str) {
        int v = ch;
        if (!(ch >= 48 && ch <= 57)) {
			return false;
        }
    }

	return true;
}

int main() {
	int n, sum = 0;
	cin >> n;

	for (int i = 0; i < n; i++) {
		string chars;
		cin >> chars;
		
		if (is_digits(chars)) {
			sum += stoi(chars);
		}
	}

	cout << sum;



	return 0;
}