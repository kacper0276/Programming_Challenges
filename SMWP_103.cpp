#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int ile;
	cin >> ile;
	for(int i = 0; i < ile; i++)
	{
		double liczba, pierwiastek;
		cin >> liczba;
		pierwiastek = sqrt(liczba);	
		if(liczba > 0 && (pierwiastek == (int)pierwiastek))
		{
			cout << "TAK" << endl;
		}
		else
		{
			cout << "NIE" << endl;
		}
	}
	return 0;
}