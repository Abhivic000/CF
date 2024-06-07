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

#define rep(i,a,b) for (ll i = a; i <= b; i++)
// for (int i = 1; i <= n; i++) { }
//rep(i,1,n) { }

template<typename T, typename T1>T amax(T &a, T1 b) {if (b > a)a = b; return a;}
template<typename T, typename T1>T amin(T &a, T1 b) {if (b < a)a = b; return a;}

void solve() {
    ll n;
    cin >> n;
    vi vecA(n), vecB(n);
    rep(i, 0, n-1) {
        cin >> vecA[i];
    }
    rep(i, 0, n-1) {
        cin >> vecB[i];
    }
    ll m;
    cin >> m;
    unordered_map<ll,ll> mpp;
    rep(i, 0, m-1) {
        ll val;
        cin >> val;
        mpp[val]++;
    }
    rep(i, 0, n-1) {
        if (vecA[i] != vecB[i]) {
            if (mpp[vecB[i]] > 0) {
                mpp[vecB[i]]--;
            } else {
                cout << "NO" << endl;
                return;
            }
        }
    }
    bool extra = false;
    for (const auto& pair : mpp) {
        if (pair.second > 1) {
            extra = true;
            break;
        }
    }
    if (!extra) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
    }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
    
}