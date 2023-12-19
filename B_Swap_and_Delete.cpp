#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        int n = s.length();
        int count0 = count(s.begin(), s.end(), '0');
        int count1 = count(s.begin(), s.end(), '1');

        if (count0 == count1) {
            cout << 0 << endl;
        } else {
            int cost = 0;

            
            for (int i = 0; i < n; ++i) {
                if (s[i] == '0' && s[(i + 1) % n] == '1') {
                    
                    cost += 0; 
                } else if (s[i] == '1' && s[(i + 1) % n] == '0') {
                    
                    cost += 0; 
                } else {
                   
                    cost += 1; 
                }
            }

            cout << cost << endl;
        }
    }

    return 0;
}
