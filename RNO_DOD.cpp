#include <iostream>
using namespace std;
int main()
{
	int a,n,b;
	cin>>n; 
	for(int i=0;i<n;i++){
		int s=0;
		cin>>a;
		for (int i=0;i<a;i++){	
		cin>>b;
		s=b+s;	
	}
	cout<<s<<endl;
	}	
}