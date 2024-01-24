#include <bits/stdc++.h>
using namespace std;
int main()
{
	string napis;
	cin >> napis;
	int L = napis.length();
	int ile_skalowan;
	cin >> ile_skalowan;
	for(int i = 0; i < ile_skalowan ; i++)
	{
		int skala;
		cin >> skala;
		if (skala == 0) cout << napis[L-1];
		else if (skala > 0) 
		{
			for (int j = 0; j < L; j++)
			{
				cout << napis[j];
				if(j < L-1)
				{
					int licznik = skala-1;
					while (licznik > 0)
					{
						cout << " ";
						licznik--;
					}
				}
			}
		}
		else
		{
			for (int j = L-1; j >= 0; j--)
			{
				cout << napis [j];
				int licznik = skala+1;
				if(j > 0)
				{
				while (licznik < 0)
				{
					cout << " ";
					licznik++;
				}
				}
			}
		}
		if (i < ile_skalowan-1) cout << endl;
	}
}