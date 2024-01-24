#include <iostream>
using namespace std;
int main() {
  int n,tab[1000];
  cin>>n;
  for(int i=0; i<n;i++){
  	cin>>tab[i];
  }	
  char z;
  int l;
   cin>>z>>l;
 	for(int j=0;j<n;j++){
  	if(z=='>'&& tab[j]>l){
  		cout<<tab[j]<<endl;
	  }
	 if(z=='<'&& tab[j]<l){
	  		cout<<tab[j]<<endl;
		  }	  
  }
}
