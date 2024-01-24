#include<iostream>
using namespace std;
int main()
{
	int t,l;
	cin>>t;
	while(t--){
		long long suma=0;
		int i;
		cin>>l;
		for( i=1;i*i<l;i++){
			if(l%i==0){
				suma+=i;
				suma+=l/i;
			}
		}
		if(i*i==l){
			suma+=i;	
		}
		cout<<suma<<endl;
	}
	return 0;
}