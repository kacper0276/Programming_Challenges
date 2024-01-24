#include <iostream>
using namespace std;
int main()
{
	string tekst,linia;
    while (getline(cin,linia))
        tekst+=linia+'\n';
    for (int i=0;i<tekst.size();i++)
    {
        if (tekst[i]=='?' && tekst[i+1]=='?' && (tekst[i+2]=='=' || tekst[i+2]=='/' || tekst[i+2]==(char)39 ||
                                                 tekst[i+2]=='(' || tekst[i+2]==')' || tekst[i+2]=='!' ||
                                                 tekst[i+2]=='<' || tekst[i+2]=='>' || tekst[i+2]=='-'))
        {   tekst[i]=0;
            tekst[i+1]=0;
            switch (tekst[i+2])
            {
            case '=':
                tekst[i+2]='#';
                break;
            case '/':
                tekst[i+2]=(char)92;
                break;
            case (char)39:
                tekst[i+2]='^';
                break;
            case '(':
                tekst[i+2]='[';
                break;
            case ')':
                tekst[i+2]=']';
                break;
            case '!':
                tekst[i+2]='|';
                break;
            case '<':
                tekst[i+2]='{';
                break;
            case '>':
                tekst[i+2]='}';
                break;
            case '-':
                tekst[i+2]='~';
                break;
            }
        }
    }
    cout<<tekst;
    return 0;
}
