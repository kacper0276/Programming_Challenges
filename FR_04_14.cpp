#include <bits/stdc++.h>
using namespace std;
const int N = 1e7 + 1e2;
bool p[N] = {};
int main()
{
    for (int i = 2; i*i <= N; i++)
    {
        if (!p[i])
        {
            for (int j = i*i; j <= N; j += i)
            {
                p[j] = true;
            }
        }
    }
    p[1] = 1;
    p[0] = 1;
    int t, a, d = 1, u = 1;
    cin >> t;
    for (int i = 0; i<t; i++)
    {
        cin >> a;
        if (p[a] == 0)
        {
            cout << a << endl;
        }
        else
        {
            while (p[a + d] == 1)
            {
                d++;
            }
            while (p[a - u] == 1)
            {
                u++;
            }
            if (u>d)
            {
                cout << a + d << endl;
            }
            else
            {
                cout << a - u << endl;
            }
            u = 1;
            d = 1;
        }
    }
}