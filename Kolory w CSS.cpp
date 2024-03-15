#include <iostream>

using namespace std;

string decToHexa(int n)
{
	char hexaDeciNum[2];

	int i = 0;
	while (n != 0) {

		int temp = 0;

		temp = n % 16;

		if (temp < 10) {
			hexaDeciNum[i] = temp + 48;
			i++;
		}
		else {
			hexaDeciNum[i] = temp + 55;
			i++;
		}

		n = n / 16;
	}

	string hexCode = "";
	if (i == 2) {
		hexCode.push_back(hexaDeciNum[1]);
		hexCode.push_back(hexaDeciNum[0]);
	}
	else if (i == 1) {
		hexCode = "0";
		hexCode.push_back(hexaDeciNum[0]);
	}
	else if (i == 0)
		hexCode = "00";

	return hexCode;
}

string color(int r, int g, int b) {
	if (r == 0 && g == 0 && b == 0) {
		return "black";
	}
	else if (r == 192 && g == 192 && b == 192) {
		return "silver";
	}
	else if (r == 128 && g == 128 && b == 128) {
		return "gray";
	}
	else if (r == 255 && g == 255 && b == 255) {
		return "white";
	}
	else if (r == 128 && g == 0 && b == 0) {
		return "maroon";
	}
	else if (r == 255 && g == 0 && b == 0) {
		return "red";
	}
	else if (r == 128 && g == 0 && b == 128) {
		return "purple";
	}
	else if (r == 255 && g == 0 && b == 255) {
		return "fuchsia";
	}
	else if (r == 0 && g == 128 && b == 0) {
		return "green";
	}
	else if (r == 0 && g == 255 && b == 0) {
		return "lime";
	}
	else if (r == 128 && g == 128 && b == 0) {
		return "olive";
	}
	else if (r == 255 && g == 255 && b == 0) {
		return "yellow";
	}
	else if (r == 0 && g == 0 && b == 128) {
		return "navy";
	}
	else if (r == 0 && g == 0 && b == 255) {
		return "blue";
	}
	else if (r == 0 && g == 128 && b == 128) {
		return "teal";
	}
	else if (r == 0 && g == 255 && b == 255) {
		return "aqua";
	}
	else {
		string hexCode = "#";
		hexCode += decToHexa(r);
		hexCode += decToHexa(g);
		hexCode += decToHexa(b);

		return hexCode;
	}
}

int main() {
	int n, r, g, b;
	cin >> n;

	while (n--) {
		cin >> r >> g >> b;
		cout << color(r, g, b) << endl;
	}

	return 0;
}