#include <iostream>
#include <stack>
#include <vector>
#include <string>

using namespace std;

int applyOperation(int a, int b, char op) {
    switch (op) {
    case '+':
        return a + b;
    case '-':
        return a - b;
    case '*':
        return a * b;
    }
}

int evaluateExpression(vector<int>& numbers, vector<char>& operators) {
    stack<int> nums;
    stack<char> ops;

    for (int i = 0; i < operators.size(); ++i) {
        nums.push(numbers[i]);

        while (!ops.empty() && (ops.top() == '*' || ops.top() == '/')) {
            int b = nums.top(); nums.pop();
            int a = nums.top(); nums.pop();
            char op = ops.top(); ops.pop();
            nums.push(applyOperation(a, b, op));
        }

        ops.push(operators[i]);
    }

    nums.push(numbers.back());

    while (!ops.empty()) {
        int b = nums.top(); nums.pop();
        int a = nums.top(); nums.pop();
        char op = ops.top(); ops.pop();
        nums.push(applyOperation(a, b, op));
    }

    return nums.top();
}

int main() {
    int n;
    cin >> n;

    vector<int> numbers(n);
    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
    }

    vector<char> operators(n - 1);
    for (int i = 0; i < n - 1; ++i) {
        cin >> operators[i];
    }

    int result = evaluateExpression(numbers, operators);
    cout << result << endl;

    return 0;
}
