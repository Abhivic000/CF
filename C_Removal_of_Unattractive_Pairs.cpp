#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int k = s.size();
        int i = 0;

        while (i < k) {
            if (i + 1 < k && s[i] != s[i + 1]) {
                s.erase(i + 1, 1);
            }
            if (i < k && i + 2 < k && s[i] != s[i + 2]) {
                s.erase(i, 1);
            } else {
                i++;
            }
            k = s.size();  // Update the size after erasing
        }

        cout << s << endl;
    }

    return 0;
}
