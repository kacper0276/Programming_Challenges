#include<iostream>
using namespace std;
int main()  
{
	int a,w=0,b;
	char z;
	while (cin>>z)
{
	if(z=='+')
	{
		cin>>a>>b;
		w=a+b;
		cout<<w<<endl;
	}
	else if(z=='-')
	{
		cin>>a>>b;
		w=a-b;
		cout<<w<<endl;
	}
	else if(z=='*')
	{
		cin>>a>>b;
		w=a*b;
		cout<<w<<endl;
	}
	else if(z=='/')
	{
		cin>>a>>b;
		w=a/b;
		cout<<w<<endl;
	}
	else if(z=='%')
	{
		cin>>a>>b;
		w=a%b;
		cout<<w<<endl;
	}
}
	return 0;
}
