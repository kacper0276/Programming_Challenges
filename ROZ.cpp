#include<bits/stdc++.h> 
using namespace std;
int main()
{
    int n, a, b, c, popa, popb, popc;
    scanf("%d%d%d%d", &n, &popa, &popb, &popc);
    for( int i = 1; i<n; i++ )
    {
        scanf("%d%d%d", &a, &b, &c);
        a += min( popb, popc );
        b += min( popa, popc );
        c += min( popb, popa );
        popa = a;
        popb = b;
        popc = c;
    }
    printf("%d\n", min(a, min(b, c)));
    return 0;
}