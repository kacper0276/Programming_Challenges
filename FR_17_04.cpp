// Pizza.cpp : Ten plik zawiera funkcj� �main�. W nim rozpoczyna si� i ko�czy wykonywanie programu.
//
#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double nm, sm, ng, sg;
    double wynikm, wynikg;
    int t;

    cin >> t;
    while (t--) 
    {
        cin >> nm >> sm >> ng >> sg;

        wynikm = (double)M_PI * pow(sm / 2, 2);
        wynikg = (double)M_PI * pow(sg / 2, 2);

        wynikg = wynikg * ng;
        wynikm = wynikm * nm;
        if (wynikg > wynikm) 
        {
            cout << "Grzesiek" << endl;
        }
        else if (wynikg < wynikm) 
        {
            cout << "Maciek" << endl;
        }
        else 
        {
            cout << "porcje sa takie same" << endl;
        }
    }
}

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotycz�ce rozpoczynania pracy:
//   1. U�yj okna Eksploratora rozwi�za�, aby doda� pliki i zarz�dza� nimi
//   2. U�yj okna programu Team Explorer, aby nawi�za� po��czenie z kontrol� �r�d�a
//   3. U�yj okna Dane wyj�ciowe, aby sprawdzi� dane wyj�ciowe kompilacji i inne komunikaty
//   4. U�yj okna Lista b��d�w, aby zobaczy� b��dy
//   5. Wybierz pozycj� Projekt > Dodaj nowy element, aby utworzy� nowe pliki kodu, lub wybierz pozycj� Projekt > Dodaj istniej�cy element, aby doda� istniej�ce pliku kodu do projektu
//   6. Aby w przysz�o�ci ponownie otworzy� ten projekt, przejd� do pozycji Plik > Otw�rz > Projekt i wybierz plik sln
