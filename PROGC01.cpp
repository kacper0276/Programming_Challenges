#include<iostream>
using namespace std;
int l;
string linia;
int main(){
l = 0;
while(getline(cin, linia)){
    if(cin.eof())break;
        else l++;
    }
    
cout<<l+1;
}