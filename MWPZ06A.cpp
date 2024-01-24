#include<iostream>
#include <cmath>
using namespace std;
int main()
{
double x,y,z;
long int wiek,a;
cin >> a;
for (int m=0; m<a; m++)
{
cin >> x >> y >> z;
cout << round (((z*y-x-y)/(1-z))*(-12)) << endl;
}
return 0;
}