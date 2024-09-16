#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main() {
    int k;
    cin >> k;
    cin.ignore();

    stack<int> s;
    int max_depth = 0;

    while (k--) {
        string line;
        getline(cin, line);

        if (line == "for") {
            s.push(s.empty() ? 1 : s.top() + 1);
            max_depth = max(max_depth, s.top());
        } else if (line == "end") {
            if (!s.empty()) {
                s.pop();
            }
        } else if (line == "instruction") {
            continue;
        }
    }

    if (max_depth == 0) {
        cout << "O(1)" << endl;
    } else if (max_depth == 1) {
        cout << "O(n)" << endl;
    } else {
        cout << "O(n^" << max_depth << ")" << endl;
    }

    return 0;
}
