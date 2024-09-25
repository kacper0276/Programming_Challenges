#include <iostream>
#include <string>

using namespace std;

int main() {
    int Z;
    cin >> Z;
    cin.ignore();
    
    while (Z--) {
        string word;
        getline(cin, word);
        
        int total_moves = 0;
        char current_position = 'A';
        
        for (char letter : word) {
            int move_forward = abs(letter - current_position);
            int move_backward = 26 - move_forward;
            total_moves += min(move_forward, move_backward);
            current_position = letter;
        }
        
        cout << total_moves << endl;
    }

    return 0;
}
