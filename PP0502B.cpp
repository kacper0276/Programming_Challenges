#include <iostream>
using namespace std;
int main () {
	int t, z, n,j, tab[100];
	cin >> z;
		for (int i=0; i<z; i++) {
			cin >> n;
				for (int j=0; j<n; j++)
					cin >> tab [j];
				for (j=n-1; j>=0; j--) 
					cout << tab[j] << " ";
					cout << endl;
		}
	

}
