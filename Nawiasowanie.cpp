#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool isMatchingPair(char opening, char closing) {
    if (opening == '(' && closing == ')')
        return true;
    else if (opening == '[' && closing == ']')
        return true;
    else if (opening == '{' && closing == '}')
        return true;
    else if (opening == '<' && closing == '>')
        return true;
    else
        return false;
}

bool isBalanced(const string& expression) {
    stack<char> stack;

    for (char bracket : expression) {
        if (bracket == '(' || bracket == '[' || bracket == '{' || bracket == '<') {
            stack.push(bracket);
        }
        else if (bracket == ')' || bracket == ']' || bracket == '}' || bracket == '>') {
            if (stack.empty() || !isMatchingPair(stack.top(), bracket)) {
                return false;
            }
            stack.pop();
        }
    }

    return stack.empty();
}

int main() {
    string expression;
    cin >> expression;

    if (isBalanced(expression)) {
        cout << "Tak" << endl;
    }
    else {
        cout << "Nie" << endl;
    }

    return 0;
}
