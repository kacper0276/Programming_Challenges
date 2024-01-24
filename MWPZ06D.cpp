#include <iostream>
using namespace std;
int main()
{
    int liczbaTestow;
    cin >> liczbaTestow;
    while( liczbaTestow-- ) {
        int bachory, cuksy;
        cin >> bachory >> cuksy;
        bachory--; 
        if( cuksy < bachory ) { cout << "TAK" << endl; continue; } 
        if(( bachory == 0 ) &&( cuksy > 0 ) ) { cout << "TAK" << endl; continue; } 
        if( cuksy == 0 ) { cout << "NIE" << endl; continue; } 
        if(( cuksy % bachory ) > 0 ) cout << "TAK" << endl; 
        else cout << "NIE" << endl;
       
    }
   
   
}