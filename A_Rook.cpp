#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string position;
        cin >> position;

        char col = position[0];
        char row = position[1];

        for (char c = 'a'; c <= 'h'; c++) {
            if (c != col) {
                cout << c << row << endl;
            }
        }
        for (char r = '1'; r <= '8'; r++) {
            if (r != row) {
                cout << col << r << endl;
            }
        }

        cout << endl;
    }

    return 0;
}
