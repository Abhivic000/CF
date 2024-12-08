#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

typedef vector<int> vi;
typedef pair<int, int> pi;

#define fr     first
#define sc     second
#define pb     push_back
#define pob    pop_back
#define pf     push_front
#define pof    pop_front

#define rep(i, a, b) for (int i = a; i <= b; i++)

template<typename T, typename T1>
T amax(T &a, T1 b) {
    if (b > a) a = b; 
    return a;
}

template<typename T, typename T1>
T amin(T &a, T1 b) {
    if (b < a) a = b; 
    return a;
}

void solve() {
    int k;
    cin >> k;
    vi a(k);
    for (auto &x : a) cin >> x;

    int s = k - 2;
    sort(a.begin(), a.end());

    for (int n = 1; n * n <= s; n++) {
        if (s % n == 0) {
            int m = s / n;
            if (binary_search(a.begin(), a.end(), n) && binary_search(a.begin(), a.end(), m)) {
                cout << n << " " << m << "\n";
                return;
            }
        }
    }

    cout<<"1 1"<<endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
