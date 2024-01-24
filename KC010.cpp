#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	string zdanie;
	int wyrazy;
	int liczby;
	while(getline(cin, zdanie)) {
		wyrazy = 0;
		liczby = 0;
		if(zdanie[0] > 47 && zdanie[0] < 58) 
			liczby++;
		else 
		    wyrazy++;
		for(int i = 1; i < zdanie.length(); i++) {
			if(zdanie[i] == ' ')
			{	
				if(zdanie[i + 1] > 47 && zdanie[i + 1] < 58) 
					liczby++;
				else 
				    wyrazy++;
	   		}
		}
		cout << liczby << " " << wyrazy << endl;
		
	}
}
