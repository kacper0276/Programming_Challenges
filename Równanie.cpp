#include <iostream>
#include <string>
#include <sstream>
using namespace std;

pair<int, int> processSide(string side) {
    int coef = 0;
    int constant = 0;
    int sign = 1;
    int i = 0;
    int n = side.size();
    
    while (i < n) {
        if (side[i] == '+') {
            sign = 1;
            i++;
        } else if (side[i] == '-') {
            sign = -1;
            i++;
        }

        int num = 0;
        bool isNum = false;
        bool isX = false;
        
        while (i < n && isdigit(side[i])) {
            num = num * 10 + (side[i] - '0');
            i++;
            isNum = true;
        }
        
        if (i < n && side[i] == 'x') {
            isX = true;
            i++;
        }
        
        if (!isNum && isX) num = 1;
        if (isNum && !isX) constant += sign * num;
        if (isX) coef += sign * num;
    }

    return {coef, constant};
}

int main() {
    int Z;
    cin >> Z;
    cin.ignore();
    
    while (Z--) {
        string equation;
        getline(cin, equation);

        int equalPos = equation.find('=');
        
        string leftSide = equation.substr(0, equalPos);
        string rightSide = equation.substr(equalPos + 1);
        
        auto [leftCoef, leftConst] = processSide(leftSide);
        auto [rightCoef, rightConst] = processSide(rightSide);
        
        int finalCoef = leftCoef - rightCoef;
        int finalConst = rightConst - leftConst;
        
        if (finalCoef == 0) {
            if (finalConst == 0) {
                cout << "NIE" << endl;
            } else {
                cout << "NIE" << endl;
            }
        } else {
            int result = finalConst / finalCoef;
            if (finalConst % finalCoef == 0) {
                cout << result << endl;
            } else {
                cout << "NIE" << endl;
            }
        }
    }
    
    return 0;
}
