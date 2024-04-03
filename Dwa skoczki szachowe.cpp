#include <iostream>
#include <cmath>

using namespace std;

bool czySasiednie(char x1, int y1, char x2, int y2) {
    int dx = abs(x1 - x2);
    int dy = abs(y1 - y2);
    return (dx == 1 && dy == 2) || (dx == 2 && dy == 1);
}

int main() {
    char x1, x2;
    int y1, y2;

    cin >> x1 >> y1 >> x2 >> y2;

    if (czySasiednie(x1, y1, x2, y2)) {
        cout << "TAK" << endl;
    }
    else {
        cout << "NIE" << endl;
    }

    return 0;
}
