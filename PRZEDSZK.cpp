#include <iostream>
using namespace std;
int main ()
{
	int n,a,b,iloczyn;
	cin>>n;
	for(int i=1; i<=n;i++)
		{
			cin>>a>>b;
			iloczyn=a*b;
				while (a!=b)
		
			
				if(a>b)
					a=a-b;
				else
					b=b-a;
					cout<<iloczyn/a<<endl;
			}
}

