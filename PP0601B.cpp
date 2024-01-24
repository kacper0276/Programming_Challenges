#include <iostream>
using namespace std;

int main() {
	
	int a,n,x,y;
	cin>>a;
	for (int i=1; i<=a; i++)
	{
		cin>>n>>x>>y;
		for (int j=1; j<=n; j++)
		{
			if (j%x==0)
			if (j%y!=0)
			cout<<j<<" ";
		}
	}

	return 0;
}