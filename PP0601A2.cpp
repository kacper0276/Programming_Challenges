#include <iostream>
using namespace std;
int main()
{
    int a, b, c=0;
    cin>>b;
    cout<<b<<endl;
    for(;;)
    {
        cin>>a;
        if(a==42 && b != 42)
        {
            ++c;
        }
        cout<<a<<endl;
        b=a;
        if(c==3)
        {
            break;
        }
    }
    return 0;
}