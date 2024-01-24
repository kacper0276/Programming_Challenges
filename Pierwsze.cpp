#include <iostream>
using namespace std;

int main()
{
    int a1, a2, b1, b2;

    cin >> a1 >> a2;
    cin >> b1 >> b2;

    a1 = max(1, min(a1, 100000));
    a2 = max(1, min(a2, 100000));
    
    b1 = max(1, min(b1, 100000));
    b2 = max(1, min(b2, 100000));

    int result = (a1 * 10 + a2) + (b1 * 10 + b2);

    cout << result << endl;

    return 0;
}

