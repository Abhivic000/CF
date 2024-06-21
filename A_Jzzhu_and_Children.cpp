#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

typedef vector<int> vi;
typedef pair<int,int> pi;

#define fr     first
#define sc     second
#define pb     push_back
#define pob    pop_back
#define pf     push_front
#define pof    pop_front

#define rep(i,a,b) for (int i = a; i <= b; i++)

template<typename T, typename T1>T amax(T &a, T1 b) {if (b > a)a = b; return a;}
template<typename T, typename T1>T amin(T &a, T1 b) {if (b < a)a = b; return a;}

void solve() {
    ll n, k, x;
    cin >> n >> k;
    queue<pair<ll, ll>> st;
    rep(i, 0, n - 1) {
        cin >> x;
        st.push({x, i + 1});
    }
    ll ans = -1;
    while (!st.empty()) {
        ll a = st.front().first;
        ll idx = st.front().second;
        st.pop();
        if (k < a) {
            a -= k;
            st.push({a, idx});
        } else {
            ans = idx;
        }
    }
    cout << ans << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t = 1;
    // cin >> t;
    while (t--) solve();
    return 0;
}
