#include <iostream>
#include <string>
#include <vector>
#include <cctype>

using namespace std;

string compressLetters(const string& s) {
    string res;
    size_t n = s.size();
    size_t i = 0;
    while (i < n) {
        size_t j = i;
        while (j < n && s[j] == s[i]) {
            j++;
        }
        size_t count = j - i;
        string compressed = string(1, s[i]) + "*" + to_string(count);
        if (compressed.size() < count) {
            res += compressed;
        }
        else {
            res.append(count, s[i]);
        }
        i = j;
    }
    return res;
}

string decompressLetters(const string& s) {
    string res;
    size_t n = s.size();
    size_t i = 0;
    while (i < n) {
        char c = s[i];
        if (i + 1 < n && s[i + 1] == '*') {
            size_t j = i + 2;
            int count = 0;
            while (j < n && isdigit(static_cast<unsigned char>(s[j]))) {
                count = count * 10 + (s[j] - '0');
                j++;
            }
            res.append(count, c);
            i = j;
        }
        else {
            res.push_back(c);
            i++;
        }
    }
    return res;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string mode;
    if (!(cin >> mode)) {
        return 0;
    }

    vector<string> tokens;
    string word;
    while (cin >> word) {
        tokens.push_back(word);
    }

    vector<string> output;
    if (mode == "KOMPRESJA") {
        for (string& w : tokens) {
            w = compressLetters(w);
        }
        size_t n = tokens.size();
        size_t i = 0;
        while (i < n) {
            size_t j = i;
            while (j < n && tokens[j] == tokens[i]) {
                j++;
            }
            size_t count = j - i;
            if (count > 1) {
                string compressed = tokens[i] + "/" + to_string(count);
                size_t uncompressedLen = count * tokens[i].size() + (count - 1);
                if (compressed.size() < uncompressedLen) {
                    output.push_back(compressed);
                }
                else {
                    for (size_t k = 0; k < count; k++) {
                        output.push_back(tokens[i]);
                    }
                }
            }
            else {
                output.push_back(tokens[i]);
            }
            i = j;
        }
    }
    else if (mode == "DEKOMPRESJA") {
        for (const string& t : tokens) {
            size_t slashPos = t.find('/');
            string wordPart;
            int count = 1;
            if (slashPos != string::npos) {
                wordPart = t.substr(0, slashPos);
                count = stoi(t.substr(slashPos + 1));
            }
            else {
                wordPart = t;
            }
            string decompressed = decompressLetters(wordPart);
            for (int k = 0; k < count; k++) {
                output.push_back(decompressed);
            }
        }
    }

    for (size_t i = 0; i < output.size(); i++) {
        if (i > 0) {
            cout << ' ';
        }
        cout << output[i];
    }
    cout << '\n';

    return 0;
}
