#include <iostream>
#include <string>

using namespace std;

bool check(char c) {
    return c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'Y';
}

int main()
{
    int result_first_case = 0;
    int result_second_case = 0;
    string word;
    cin >> word;
    for (int i = 0; i < word.length(); i++) {
        bool word_vovel = check(word[i]);
        result_first_case += (i % 2 == 0) && word_vovel;
        result_first_case += (i % 2 == 1) && !word_vovel;
        result_second_case += (i % 2 == 1) && word_vovel;
        result_second_case += (i % 2 == 0) && !word_vovel;
    }
    cout << min(result_first_case, result_second_case) << endl;
    return 0;
}