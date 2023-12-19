#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.length();

    for (int i = 0; i < n / 2; i++) {
        if (s[i] == '?' && s[n - i - 1] != '?') {
            s[i] = s[n - i - 1];
        } else if (s[i] != '?' && s[n - i - 1] == '?') {
            s[n - i - 1] = s[i];
        } else if (s[i] != s[n - i - 1]) {
            cout << -1 << endl;
            return 0;
        }
    }

    for (int i = 0; i < n; i++) {
        if (s[i] == '?') {
            s[i] = 'a';
        }
    }

    cout << s << endl;

    return 0;
}
