#include <iostream>
using namespace std;

int main() {
	
	int n;
	cin>>n;
	int dzi[11] = {1,3,7,9,1,3,7,9,1,3,1};
	for(int i=1;i<=n;i++){
		int suma=0;
		string pesel;
		cin>>pesel;
		for(int j=0;j<11;j++){
			int num=pesel[j] - '0';
			suma+=num*dzi[j];
		}
		if(suma>0 && suma%10==0)
			cout <<"D\n";
		else
			cout <<"N\n";
	}
	return 0;
}