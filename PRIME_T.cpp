#include <iostream>
#include <cstdlib>

using namespace std;

int x,n;

int main()
{
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        cin>>x;

        for(int i=2; i<=10000; i++)
        {
            if((x%i==0)&&(i!=x))
            {
                cout<<"NIE"<<endl;
                break;
            }

            else if(x==1)
            {
                cout<<"NIE"<<endl;
                break;
            }

            if(i==10000)
            {
                cout<<"TAK"<<endl;
            }
        }
    }

    return 0;
}
