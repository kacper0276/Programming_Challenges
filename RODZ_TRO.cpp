#include<iostream>
using namespace std;
int main()
{
long double a,b,c;
while (cin>>a>>b>>c)
{
if (a<b+c && b<a+c && c<a+b && a>0 && b>0 && c>0 && a<10000 && b<10000 && c<10000)
{
if(a*a==b*b+c*c || b*b==c*c+a*a || c*c==a*a+b*b)
cout <<"prostokatny";

else if(c*c>a*a+b*b || b*b>c*c+a*a || a*a>b*b+c*c) 
cout<<"rozwartokatny";
else if(a*a<b*b+c*c || b*b<c*c+a*a || c*c<a*a+b*b)
cout<<"ostrokatny";
}
else cout<<"brak";
cout <<endl;
}

return 0;
}