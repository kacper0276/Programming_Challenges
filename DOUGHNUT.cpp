#include <iostream>
using namespace std;

int main() {
	
	int n,c,k,w;
	cin>>n;
	for(int i=0; i<n; i++)
	{
		cin>>c>>k>>w;
		if(c*w<=k)
			cout << "yes"<<endl;
		else
			cout<<"no"<<endl;
	}

	return 0;
}