#include <iostream>
using namespace std;

int main() {
	
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		string a="";
		cin>>a;
		int d = a.length();
		for(int j=0;j<d/2;j++)
			cout<<a[j];
			cout<<"\n";
	}

	return 0;
}