#include <iostream>

using namespace std;

static int obliczGlowy(int strusie, int lamy)
{
	return strusie + lamy;
}

static int obliczNogi(int strusie, int lamy)
{
	return (strusie * 2) + (lamy * 4);
}

int main() 
{
	int strusieB = 0, lamyB = 0, strusieF = 0, lamyF = 0;
	cin >> strusieB >> lamyB >> strusieF >> lamyF;

	int glowyB = obliczGlowy(strusieB, lamyB);
	int glowyF = obliczGlowy(strusieF, lamyF);
	int nogiB = obliczNogi(strusieB, lamyB);
	int nogiF = obliczNogi(strusieF, lamyF);

	if (nogiB == nogiF)
	{
		if (glowyB == glowyF)
		{
			cout << "remis";
		}
		else if (glowyB > glowyF)
		{
			cout << "Bajtek";
		}
		else
		{
			cout << "Frajtek";
		}
	} 
	else 
	{
		if (nogiB > nogiF)
		{
			cout << "Bajtek";
		}
		else
		{
			cout << "Frajtek";
		}
	}

	return 0;
}