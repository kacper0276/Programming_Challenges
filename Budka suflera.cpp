#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> splitWords(const string& line) {
    vector<string> words;
    stringstream ss(line);
    string word;
    while (ss >> word) {
        words.push_back(word);
    }
    return words;
}

int main() {
    string original, toCompare;
    getline(cin, original);
    getline(cin, toCompare);

    vector<string> originalWords = splitWords(original);
    vector<string> compareWords = splitWords(toCompare);

    vector<string> missingWords;
    size_t j = 0;
    for (size_t i = 0; i < originalWords.size(); ++i) {
        if (j < compareWords.size() && originalWords[i] == compareWords[j]) {
            ++j;
        }
        else {
            missingWords.push_back(originalWords[i]);
        }
    }

    cout << missingWords.size() << endl;

    if (!missingWords.empty()) {
        sort(missingWords.begin(), missingWords.end());
        for (const auto& word : missingWords) {
            cout << word << endl;
        }
    }

    return 0;
}