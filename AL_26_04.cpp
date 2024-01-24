#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t, s, n, a;
	cin >> t;
	while (t--)
	{
		cin >> n;
		s = 0;
		while (n--)
		{
			cin >> a;
			s ^= a;
		}
		cout << s << endl;
	}
	return 0;
}