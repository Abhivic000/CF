#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while (t--){
         int n;
    cin >> n;
    int a[n];

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int ans = 0;
    for(int i = 0; i + 1 < n; i++) {
        ans += ((a[i] % 2) == (a[i + 1] % 2));
        // If both numbers have the same parity, increment the answer
    }

    cout << ans << "\n";
    }
    return 0;
}
