#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    if (n == 1) {
        cout << 1 << " " << 0;
        return;
    }
    int l = 0, r = n - 1, cnta = v[0], cntb = v[n - 1], va = 1, vb = 1;
    l++;
    r--;
    
    while (l <= r) {
        if (cnta <= cntb) {
            cnta += v[l];
            va++;
            l++;
        } else {
            cntb += v[r];
            vb++;
            r--;
        }
    }

    cout << va << " " << vb;
}
