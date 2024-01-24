#include<iostream>
#include<string>
using namespace std;

struct punkt
{
       string nazwa;
       int x,y;
       int odl;
};

void zamien(punkt &a, punkt &b)
{
	punkt temp = a;
	a = b;
	b = temp;
}

void sortuj(punkt tab[],int lewy,int prawy)
{
   if(lewy<prawy) {
      int m=lewy;
      for(int i=lewy+1;i<=prawy;i++)
		  if(tab[i].odl<tab[lewy].odl)
            zamien(tab[++m],tab[i]);
      zamien(tab[lewy],tab[m]);
      sortuj(tab,lewy,m-1);
      sortuj(tab,m+1,prawy);
   }
}

int main()
{
      ios_base::sync_with_stdio(0);
      punkt tab[1000];
      int t,n;
      cin>>t;
      while(t--)
      {
         cin>>n;
         for(int i=0;i<n;i++)
         {
			 cin>>tab[i].nazwa;
			 cin>>tab[i].x>>tab[i].y;
		tab[i].odl=tab[i].x*tab[i].x+tab[i].y*tab[i].y;
         }
         sortuj(tab,0,n-1);
         for(int i=0;i<n;i++)
			 cout<<tab[i].nazwa<<" "<<tab[i].x<<" "<<tab[i].y<<endl;
      }
}