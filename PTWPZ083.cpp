#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int t;
	cin >> t;
    int x=getchar();
    for (int i = 1; i <= t; i++)
    {

        int wynik = getchar() - 48;
        int a;

        while (a = getchar())
        {
            if (a == '+')
            {
                int liczba = getchar() - 48;
                wynik += liczba;
            }
            else if (a == '-')
            {
                int liczba = getchar() - 48;
                wynik -= liczba;
            }
            else if (a == '\n')
                break;
        }
        cout << wynik << endl;
    }
    return 0;
}