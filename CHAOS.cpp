#include<bits/stdc++.h>
using namespace std;
string czas;
bool testPalindromu(string napis)
{
    int i,j,w=0;
    napis.erase(2,1);
    if(napis[0]=='0')napis.erase(0,1);
    if(napis[0]=='0')napis.erase(0,1);
    if(napis[0]=='0')napis.erase(0,1);
    for(i=0,j=napis.length()-1;i<j;i++,j--)
    {
        if(napis[i]!=napis[j])
            w=1;
    }
    if(w==0)return true;
    else return false;
}
 
void dodajMinute()
{
    if(czas[4]=='9')
    {
        czas[4]='0';
        if(czas[3]=='5')
        {
            czas[3]='0';
            czas[1]++;
            if(czas[1]=='0'||czas[1]=='4'&&czas[0]=='2')
         {
             if(czas[1]=='4'&&czas[0]=='2')czas="00:00";
             else
             {
                 czas[1]='0';
                 czas[0]++;
             }
         }

        }
        else czas[3]++;
    }
    else czas[4]++;
}
 
int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        cin>>czas;
        dodajMinute();
        while(testPalindromu(czas)==false)
        {
            dodajMinute();
        }
        cout<<czas<<endl;
    }
    return 0;
}
