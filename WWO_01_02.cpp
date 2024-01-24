#include<bits/stdc++.h>
using namespace std;
int main()
{
	int dlugosc, szerokosc, wysokosc = {0};
    cin >> dlugosc >> szerokosc >> wysokosc;
    const int WydajnoscBezowej = 5;
    const int WydajnoscCzerwonej = 3;
    int PoleScianDluzszych = (dlugosc * wysokosc) * 2;
    int PoleScianKrotszych = (szerokosc * wysokosc) * 2;
    double PoleScian = PoleScianDluzszych + PoleScianKrotszych;
    double IloscFarbNaSciany = PoleScian / WydajnoscBezowej;
    IloscFarbNaSciany = ceil(IloscFarbNaSciany);
    double PoleDachu = szerokosc * dlugosc;
    double IloscFarbNaDach = PoleDachu / WydajnoscCzerwonej;
    IloscFarbNaDach = ceil(IloscFarbNaDach);
    int IloscPuszek = IloscFarbNaDach + IloscFarbNaSciany;
    cout << IloscPuszek;
	return 0;
}