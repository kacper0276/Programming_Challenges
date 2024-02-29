#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

char function(string napis, int index) {
    if (index == 0) {
        return napis[0];
    }

    if (index == napis.length() - 1) {
        return napis[napis.length() - 1];
    }

    return '*';
}

int main()
{
    string napis1, napis2;
    vector<char> cenzurowanyNapis1;
    vector<char> cenzurowanyNapis2;

    cin >> napis1 >> napis2;

    if (napis1.length() <= 2) {
        for (char& c : napis1) {
            cenzurowanyNapis1.push_back(c);
        }
    }
    else {
        for (int i = 0; i < napis1.length(); i++) {
            cenzurowanyNapis1.push_back(function(napis1, i));
        }
    }

    if (napis2.length() <= 2) {
        for (char& c : napis2) {
            cenzurowanyNapis2.push_back(c);
        }
    }
    else {
        for (int i = 0; i < napis2.length(); i++) {
            cenzurowanyNapis2.push_back(function(napis2, i));
        }
    }

    string str1(cenzurowanyNapis1.begin(), cenzurowanyNapis1.end());
    string str2(cenzurowanyNapis2.begin(), cenzurowanyNapis2.end());

    cout << str1 << " " << str2;
    
}
