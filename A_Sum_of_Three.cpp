#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        bool ok = false;

        for (int x = 1; x <= n; x++) {
            for (int y = 1; y <= n; y++) {
                int z = n - (x + y);
                if (z >= 1 && z <= n && z != x && z != y && x != y && x % 3 != 0 && y % 3 != 0 && z % 3 != 0) {
                    ok = true;
                    cout << "YES" << endl;
                    cout << x << " " << y << " " << z << endl;
                    break;
                }
            }
            if (ok) {
                break;
            }
        }

        if (!ok) {
            cout << "NO" << endl;
        }
    }

    return 0;
}
