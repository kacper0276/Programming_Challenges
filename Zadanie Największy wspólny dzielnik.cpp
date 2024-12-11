#include <iostream>

using namespace std;

int NWD(int a, int b)
{
    while (a != b)
        if (a > b)
            a -= b;
        else
            b -= a;
    return a;
}

int main() {
	int n1, n2;
	cin >> n1 >> n2;

    cout << NWD(n1, n2);

	return 0;
}