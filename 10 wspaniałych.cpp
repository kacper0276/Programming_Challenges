#include <iostream>
#include <algorithm>

using namespace std;

bool czyCalaPelna(int* arr) {
	for (int i = 0; i < 10; i++) {
		if (arr[i] == -1000001)
			return false;
	}

	return true;
}

int znajdzMinIndex(int* arr) {
	int min = 0;
	for (int i = 1; i < 10; i++) {
		if (arr[i] < arr[min])
			min = i;
	}

	return min;
}

int ostatniIndexNieZapelniony(int* arr) {
	for (int i = 0; i < 10; i++) {
		if (arr[i] == -1000001) {
			return i;
		}
	}
}

void sort(int* arr) {
	for (int i = 0; i < 10; i++) {
		for (int j = i + 1; j < 10; j++) {
			if (arr[i] < arr[j]) {
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

int main() {
	int n, number;
	int arr[10] = { -1000001, -1000001, -1000001, -1000001, -1000001, -1000001, -1000001, -1000001, -1000001, -1000001 };

	cin >> n;
	if (n >= 1 && n <= 1000000) {
		while (n--) {
			cin >> number;
			if (!czyCalaPelna(arr)) {
				arr[ostatniIndexNieZapelniony(arr)] = number;
			}
			else {
				int minIndex = znajdzMinIndex(arr);
				if (arr[minIndex] < number) {
					arr[minIndex] = number;
				}
			}
		}
	}

	sort(arr);

	for (auto el : arr) {
		if(el != -1000001)
			cout << el << " ";
	}

	return 0;
}