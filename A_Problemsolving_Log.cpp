#include <iostream>
#include <map>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        map<char, int> charCount;

        for (char c : s) {
            charCount[c]++;
        }

        int cnt = 0;
        int val = 1; 

        
        for (char c = 'A'; c <= 'Z'; ++c) {
            int charPosition = c - 'A' + 1;  
            if (charCount[c] >= charPosition) {
                cnt++;
            }
        }

        cout << cnt << endl;
    }

    return 0;
}
