#include <iostream>
 
using namespace std;
 
void kierunek(int &x,int &y,int w,int l)
{
    switch (w)
    {
    case 0:
        y+=l;
        break;
    case 1:
        y-=l;
        break;
    case 2:
        x-=l;
        break;
    case 3:
        x+=l;
        break;
 
    }
 
}
 
int main()
{
    int t,k, x,y,w,l;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        x=0;
        y=0;
        cin>>k;
        for(int j =0; j<k; j++)
        {
            cin>>w;
            cin>>l;
            kierunek(x,y,w,l);
 
 
 
        }
        if(x==0 && y==0) cout<<"studnia"<<endl;
        else
        {
            if(y != 0)
            {
                if(y >= 0)
                    cout<<"0 "<<y<<endl;
                else
                    cout<<"1 "<<-y<<endl;
            }
            if(x != 0)
            {
                if(x >= 0)
                    cout<<"3 "<<x<<endl;
                else
                    cout<<"2 "<<-x<<endl;
            }
        }
    }
    return 0;
}

