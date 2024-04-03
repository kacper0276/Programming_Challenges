#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int l1, l2, l3, l4;
	cin >> l1 >> l2 >> l3 >> l4;
	int arr[4] = {l1, l2, l3, l4};
	sort(arr, arr + 4);

	cout << arr[0] * arr[2];

	return 0;
}