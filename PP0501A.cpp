#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int a,b,c,n;
	int tab[50];
	cin>>n;
		for(int i=0;i<n;i++){
			cin>>a>>b;
				do{
					c=a%b;
						a=b;
						tab[i]=b;
							b=c;
				}
					while(b!=0);
						cout<<tab[i]<<endl;
		}
}
