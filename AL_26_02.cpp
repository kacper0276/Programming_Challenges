#include <iostream>
using namespace std;
int main()
{
	long long obwod,pole,n;
	cin>>n;
	while (n--)
	{
		cin >> obwod;
		if (obwod%2)
			cout<<"BRAK\n";
		else
		{
			long long b=obwod/4;
			long long a=obwod/2-b;

			pole = a*b;
			if (pole) 
				cout<<pole<<endl;
			else cout<<"BRAK\n";
		}
	}
}