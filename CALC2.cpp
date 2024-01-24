#include <iostream>

using namespace std;

int main()
{
int tab[10]={};
char s;
int a,b;
while(cin>>s>>a>>b)
{
   if(s=='+')
        cout<<tab[a]+tab[b]<<endl;
   if(s=='-')
        cout<<tab[a]-tab[b]<<endl;
   if(s=='*')
        cout<<tab[a]*tab[b]<<endl;
   if(s=='/')
        cout<<tab[a]/tab[b]<<endl;
   if(s=='%')
        cout<<tab[a]%tab[b]<<endl;
   if(s=='z')tab[a]=b;
}
 return 0;

}