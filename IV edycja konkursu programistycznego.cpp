#include <iostream>

using namespace std;

int main()
{
    int arr[5];
    int suma = 0;

    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
        suma += arr[i];
    }

    cout << suma + 5;


    return 0;
}
