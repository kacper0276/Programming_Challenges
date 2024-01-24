#include<bits/stdc++.h>
using namespace std;
int main()
{
	int plusy=0,minusy=0;
	string znaki,wyjscie;
	cin>>znaki;
	int dlugosc=znaki.length();
	for(int i=0;i<dlugosc;i++){
		if(znaki[i]=='+'){
			plusy++;
		}
		else {
			minusy++;
		}
	}
	if(minusy>plusy){
				int suma=0;
				suma=minusy-plusy;
				if(suma>=3){
					for(int i=suma;i>0;i--){
						if(i%3==0){
						wyjscie+="1 ";		
					}		
					}
				}
				else cout<<"BRAK";
	}
	else if(plusy>minusy){
		int suma=0;
		suma=plusy-minusy;
		if(suma>=3){
					for(int i=suma;i>0;i--){
						if(i%3==0){
						wyjscie+="5 ";		
					}		
					}
				}
				else if(suma<3)cout<<"BRAK";
		}
		else if(plusy==minusy) cout<<"BRAK";
	
	cout<<wyjscie<<endl;
	return 0;
}
