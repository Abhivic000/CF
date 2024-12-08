#include <bits/stdc++.h>
using namespace std;

bool solve(string n) {
    int sum = 0;
    for (char c : n) {
        sum += c - '0';
    }
    
    // If already divisible by 9
    if (sum % 9 == 0) return true;
    
    // Special case: 9 can be squared to 81, which doesn't help
    for (int i = 0; i < n.length(); i++) {
        int orig = n[i] - '0';
        int squared = orig * orig;
        
        if (squared < 10) {
            // Try modification and check divisibility
            if ((sum - orig + squared) % 9 == 0) {
                return true;
            }
        }
    }
    
    return false;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--) {
        string n;
        cin >> n;
        
        cout << (solve(n) ? "YES" : "NO") << "\n";
    }
    
    return 0;
}