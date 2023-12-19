#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;
        int n = s.size();
        bool found = false;

        for (int i = 1; i < n; i++) {
            string s1 = s.substr(0, i);
            string s2 = s.substr(i, n - i);

            if (s1[0] != '0' && s2[0] != '0' && s1 != s2 && stoi(s2) > stoi(s1)) {
                cout << s1 << " " << s2 << endl;
                found = true;
                break;
            }
        }

        if (!found) {
            cout << -1 << endl;
        }
    }

    return 0;
}
