#include <iostream>

using namespace std;

int main()
{
	int n;
	char characters[1000000];
	int index = 0;
	const char* colour[10] = { "jeden", "dwa", "trzy", "cztery", "piec", "szczesc", "siedem", "osiem", "dziewiec", "zero"};

	cin >> n;

	

	while (index < n) {
		char litera;
		cin >> litera;
		characters[index] = litera;
	}



}
