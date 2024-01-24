#include <iostream>
using namespace std;
int main()
{
	int v1,v2,x;
	cin>>x;
	for(int i=1;i<=x;i++){
		cin>>v1>>v2;
		cout<<2*v1*v2/(v1+v2)<<endl;
	}
}