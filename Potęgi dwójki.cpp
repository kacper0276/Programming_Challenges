#include <iostream>

using namespace std;

unsigned long long int pow(unsigned long long int n) {
	unsigned long long int liczba = 1;
	
	if (n == 0)
		return liczba;

	for (int i = 0; i < n; i++) {
		liczba *= 2;
	}

	return liczba;
}

void printPow2UntilN(unsigned long long int n) {
	unsigned long long int i = 0;
	
	while (pow(i) <= n)
	{
		if (pow(i) <= n) {
			cout << pow(i) << endl;
			i++;
		}
	}
}

int main() {
	unsigned long long int n;
	cin >> n;

	printPow2UntilN(n);
	return 0;
}