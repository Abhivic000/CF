#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int cnt = 0;
        int val = 1; 

        
        for (char c = 'A'; c <= 'Z'; ++c) {
             
           cnt += (count(s.begin(),s.end(),c)>=val);
            val++;   
            
        }

        cout << cnt << endl;
    }

    return 0;
}
