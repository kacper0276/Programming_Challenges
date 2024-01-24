#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double a,b;
    int testy;
    cin>>testy;
    while(testy--)
    {
        cin>>a>>b;
        double wynik = (100-((100-a)-(b/100)*(100-a)));
        cout<<fixed<<setprecision(2)<<wynik<<"\n";
    }
    return 0;
}