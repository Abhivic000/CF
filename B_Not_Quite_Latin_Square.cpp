#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        char arr[3][3];
        int a = 0;
        int b = 0;
        int c = 0;

        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                cin >> arr[i][j];
                if (arr[i][j] == 'A') {
                    a++;
                } else if (arr[i][j] == 'B') {
                    b++;
                } else if (arr[i][j] == 'C') {
                    c++;
                }
            }
        }

        if (a<3) {
            cout << 'A' << endl;
        } else if (b<3) {
            cout << 'B' << endl;
        } else {
            cout << 'C' << endl;
        }
    }

    return 0;
}
