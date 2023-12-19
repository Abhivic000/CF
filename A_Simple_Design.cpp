#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int x, k;
        cin >> x >> k;

        int y = x;
        while (true) {
            int digitSum = 0;
            int temp = y;

            while (temp > 0) {
                digitSum += temp % 10;
                temp /= 10;
            }

            if (digitSum % k == 0) {
                cout << y << endl;
                break;
            }

            y++;
        }
    }

    return 0;
}
