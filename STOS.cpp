#include <iostream>  
using namespace std;  
int dane[11];
int rozmiar;
  
void push()
{
    if (rozmiar>=10)
    {
        cout <<":("<<endl;
    }
    else
    {
        rozmiar=rozmiar+1;
        cin>>dane[rozmiar];
        cout<<":)"<<endl;
    }
}
  
void pop()
{
    if (rozmiar>=1)
    {
        cout<<dane[rozmiar]<<endl;
        rozmiar=rozmiar-1;
    }
    else
    {
        cout << ":("<<endl;
    }
}
int main()
{
  
    char wybor;
    rozmiar=0;
  
    while(cin>>wybor&&(wybor == '-'||'+'))
    {
  
 
  
        switch (wybor)
        {
        case '+':
            push();
            break;
  
        case '-':
            pop();
            break;
  
        }
  
    }
  
    return 0;
}

