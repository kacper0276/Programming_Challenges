#include <iostream>

using namespace std;

// Pierwszy ruch lub brak sąsiadów
int indexMax(int* arr, int size) {
	int max = -2147483648;
	int index = -1;

	for (int i = 0; i < size; i++) {
		if (arr[i] >= max) {
			max = arr[i];
			index = i;
		}
	}

	return index;
}

int maxIndexSomsiad(int* arr, int i) {
	return arr[i + 1] >= arr[i - 1] ? i + 1 : i - 1;
}

bool somsiedzi(int* arr, int i, int size) {
	if (i == 0) {
		return !(arr[i + 1] == -2147483648);
	} 

	if (i == size - 1) {
		return !arr[i - 1] == -2147483648;
	}

	if (arr[i + 1] == -2147483648 && arr[i - 1] == -2147483648) {
		return false;
	}

	return true;
}

bool czyNadalGra(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		if (arr[i] != -2147483648) {
			return true;
		}
	}

	return false;
}

// Łukasz zaczyna
int main() {
	int n;

	ios_base::sync_with_stdio(0);
	cin >> n;

	int* arr = new int[n];

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	// GRA
	bool stillPlay = true;
	bool somsiedziLubPierwszyRuch = true;
	bool lukaszTurn = true;
	int lukasz = 0, piotrek = 0;
	int lastIndex = -1;
	int l;

	while (stillPlay)
	{
		stillPlay = czyNadalGra(arr, n);
		if (stillPlay) {
			// Pierwszy ruch
			if (lastIndex == -1 && lukaszTurn) {
				l = indexMax(arr, n);
				lukaszTurn = false;
				lukasz += arr[l];
				lastIndex = l;
				arr[l] = -2147483648;
			}
			else {
				if (lukaszTurn) {
					somsiedziLubPierwszyRuch = somsiedzi(arr, lastIndex, n);
					if (somsiedziLubPierwszyRuch) {
						l = maxIndexSomsiad(arr, lastIndex);
						lukaszTurn = false;
						lukasz += arr[l];
						lastIndex = l;
						arr[l] = -2147483648;
					}
					else {
						l = indexMax(arr, n);
						lukaszTurn = false;
						lukasz += arr[l];
						lastIndex = l;
						arr[l] = -2147483648;
					}
				}
				else {
					somsiedziLubPierwszyRuch = somsiedzi(arr, lastIndex, n);
					if (somsiedziLubPierwszyRuch) {
						l = maxIndexSomsiad(arr, lastIndex);
						lukaszTurn = true;
						piotrek += arr[l];
						lastIndex = l;
						arr[l] = -2147483648;
					}
					else {
						l = indexMax(arr, n);
						lukaszTurn = true;
						piotrek += arr[l];
						lastIndex = l;
						arr[l] = -2147483648;
					}
				}
			}
		}
		else {
			break;
		}
		
	}

	cout << lukasz << " " << piotrek;
}