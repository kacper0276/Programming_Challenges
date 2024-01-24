#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int liczba,max1=0,max2=0,pom1,pom2;
	while(true){
		cin>>liczba;
		if(liczba!=0){
			if(liczba>max1){
				pom1=max1;
				max1=liczba;
				max2=pom1;
			}
			if(liczba>max2 && liczba<max1){
				max2=liczba;
			}
		}
		else{
		break;
		}
	}
	if(max2==0){
		printf("%d",max1);
	}
	else{
		printf("%d",max2);
	}
	return 0;
}