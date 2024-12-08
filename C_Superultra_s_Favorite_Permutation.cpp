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

template<typename T, typename T1>T amax(T &a, T1 b) { if (b > a) a = b; return a; }
template<typename T, typename T1>T amin(T &a, T1 b) { if (b < a) a = b; return a; }

void solve() {
    int n;
    cin >> n;
    if(n == 2 || n == 3 || n == 4){
        cout << "-1\n";
        return;
    }
    vi evens, odds;
    rep(i, 1, n){
        if (i % 2 == 0) evens.pb(i);
        else odds.pb(i);
    }

    vi result;
    for (int x : evens) {
        if (x != 4) result.pb(x);
    }
    result.pb(4);
    result.pb(5);
    for (int x : odds) {
        if (x != 5) result.pb(x);
    }
    for (int x : result) {
        cout << x << " ";
    }
    cout << "\n";
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}
