#include <bits/stdc++.h>
using namespace std;
int fun(int &x)
{
	int a = sqrt(x);
	while(x % a) a--;
	int b = x/a;

	return 2*a + 2*b;
}

int main()
{
	ios_base::sync_with_stdio(0);
	int t, p;
	cin >> t;

	while(t--)
	{
		cin >> p;
		cout << fun(p) << "\n";
	}
}