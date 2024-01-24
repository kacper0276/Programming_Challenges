#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    char c;
    for(;scanf("%c",&c)==1;)
    {
        if(c<='Z' && c>='A')
        {
            if(c>'W')
            {
                printf("%c",c-23);
            }
            else
            {
                printf("%c",c+3);
            }
        }
        else
        {
            printf("%c",c);
        }
    }
    return 0;
}