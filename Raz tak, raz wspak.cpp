#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

const vector<string> font[26] = {
    {" __ ", "|__|", "|  |"}, // A
    {" __ ", "|__\\", "|__/"}, // B
    {" __", "|  ", "|__"},   // C
    {"__  ", "|  \\", "|__/"},// D
    {" __", "|_ ", "|__"},   // E
    {" __", "|_ ", "|  "},   // F
    {" __ ", "| _ ", "|__|"}, // G
    {"    ", "|__|", "|  |"}, // H
    {" ", "|", "|"},         // I
    {"  ", " |", "_|"},       // J
    {" _ ", "|_/", "| \\"},   // K
    {"   ", "|  ", "|__"},   // L
    {"    ", "|\\/|", "|  |"}, // M
    {"    ", "|\\ |", "| \\|"}, // N
    {" __ ", "|  |", "|__|"}, // O
    {" __ ", "|__|", "|   "}, // P
    {"", "", ""},             // Q
    {" __ ", "|__|", "| \\ "}, // R
    {" __ ", "|__ ", " __|"}, // S
    {"___", " | ", " | "},   // T
    {"    ", "|  |", "|__|"}, // U
    {"", "", ""},             // V
    {"    ", "|  |", "|/\\|"}, // W
    {"", "", ""},             // X
    {"   ", "\\_/", " | "},   // Y
    {"__ ", " / ", "/_ "}    // Z
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    while (cin >> n && n != 0) {
        string line;
        getline(cin, line);

        while (!line.empty() && line[0] == ' ') {
            line.erase(line.begin());
        }

        vector<string> words;
        stringstream ss(line);
        string word;
        while (ss >> word) {
            words.push_back(word);
        }

        string out[3] = { "", "", "" };

        for (size_t w = 0; w < words.size(); ++w) {
            if (w > 0) {
                out[0] += "   ";
                out[1] += "   ";
                out[2] += "   ";
            }
            for (size_t i = 0; i < words[w].size(); ++i) {
                if (i > 0) {
                    out[0] += " ";
                    out[1] += " ";
                    out[2] += " ";
                }
                char c = toupper(words[w][i]);
                int idx = c - 'A';
                if (idx >= 0 && idx < 26) {
                    out[0] += font[idx][0];
                    out[1] += font[idx][1];
                    out[2] += font[idx][2];
                }
            }
        }

        if (n == 2) {
            for (int r = 0; r < 3; ++r) {
                reverse(out[r].begin(), out[r].end());
                for (char& c : out[r]) {
                    if (c == '/') c = '\\';
                    else if (c == '\\') c = '/';
                }
            }
        }

        for (int r = 0; r < 3; ++r) {
            cout << out[r] << "\n";
        }
    }

    return 0;
}