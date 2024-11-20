#include <iostream>

using namespace std;

int countCarries(const string& num1, const string& num2) {
	int carry = 0, carryCount = 0;
	int n = num1.size(), m = num2.size();
	int i = n - 1, j = m - 1;

	while (i >= 0 || j >= 0 || carry > 0) {
		int digitA = (i >= 0) ? num1[i--] - '0' : 0;
		int digitB = (j >= 0) ? num2[j--] - '0' : 0;

		int sum = digitA + digitB + carry;

		if (sum >= 10) {
			carry = 1;
			carryCount++;
		}
		else {
			carry = 0;
		}
	}

	return carryCount;
}

int main() {
	int n;
	cin >> n;

	while (n--) {
		string num1, num2;
		cin >> num1 >> num2;
		cout << countCarries(num1, num2) << endl;
	}

	return 0;
}