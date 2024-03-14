#include <iostream>
#include <stack>
#include <string>

using namespace std;

int dzialanie(int a, int b, char znak) {
	switch (znak)
	{
	case '+':
		return a + b;
	case '-':
		return a - b;
	case '*':
		return a * b;
	default:
		break;
	}
}

bool czyLiczba(char znak) {
	return znak >= '0' && znak <= '9';
}

bool czyZnak(char znak) {
	return znak == '+' || znak == '-' || znak == '*';
}

int str_to_int(string a, int& poz)
{
	int liczba = 0;
	while (poz < a.size() && czyLiczba(a[poz]))
	{
		liczba = liczba * 10 + a[poz] - '0';
		++poz;
	}
	--poz;
	return liczba;
}

int main() {
	string ONP;
	getline(cin, ONP);

	stack<int> stos;
	int a, b;

	for (int i = 0; i < ONP.size(); i++) {
		if (czyLiczba(ONP[i])) {
			stos.push((str_to_int(ONP, i)));
		}
		else {
			if (czyZnak(ONP[i])) {
				if (stos.size() < 2) {
					cout << "ERROR";
					return 0;
				}
				a = stos.top(); // top - zwraca referencję na szczytowy element stosu
				stos.pop();
				b = stos.top();
				stos.pop(); // pop - ściąga istniejący element ze szczytu stosu
				stos.push(dzialanie(b, a, ONP[i]));
			}
		}
	}

	if (stos.size() != 1) {
		cout << "ERROR";
		return 0;
	}

	cout << stos.top();

	return 0;
}