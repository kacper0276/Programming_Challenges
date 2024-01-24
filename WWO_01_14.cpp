#include <bits/stdc++.h>
using namespace std;
int main()
{
    double odlegloscOdDomu, V1, V2, V1naMinute, V2naMinute, CzasPokonaniaDrogi, OdlegloscV2 = {0};
    cin >> odlegloscOdDomu >> V1 >> V2;
    V1naMinute = (V1 * 1000)/60;
    V2naMinute = (V2 * 1000)/60;
    CzasPokonaniaDrogi = odlegloscOdDomu / V1naMinute;
    OdlegloscV2 = CzasPokonaniaDrogi * V2naMinute;
    cout << OdlegloscV2 << endl;
    return 0;
}