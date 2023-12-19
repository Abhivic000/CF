#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;

        int mini = min(a, min(b, c));
        int maxi = max(a, max(b, c));
        int middle = a + b + c - mini - maxi;

        // Check if it's possible to make all threadlets of equal length in at most three operations
        if ((mini + middle + 1 >= maxi) || (a == b && b == c)) {
            cout << "YES" << endl;
        }
        else if ((mini + middle + 1 >= maxi) || (a == b && b == c)) {
            cout << "YES" << endl;
        } 
        else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
