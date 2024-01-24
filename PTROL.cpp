#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n; 
	for(int i = 1;i<=n;i++){
		int a,b;
		cin >> a >> b;
		for(int j=1;j<a;j++){
			int c;
			cin>>c;
			cout << c << " ";
		}
		cout << b << "\n";
	}
	

	return 0;
}