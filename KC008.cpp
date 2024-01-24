#include <iostream>
using namespace std;
int main()
{
    long long int a;
    long long int b = 0;
    long long int c = 0;
    while( std::cin >> a )
    {
        b += a;
        if( a == 0 )
        {
            std::cout << b << "\n";
            c += b;
            b = 0;
        }
    }
    std::cout << c << "\n";
}

