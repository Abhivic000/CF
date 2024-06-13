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
    ll n,m;
    cin >> n >> m;
    vector<vector<char>> v(n, vector<char>(m));
    vector<pair<int, int>> vv;
    rep(i, 0, n - 1) {
        rep(j, 0, m - 1) {
            cin >> v[i][j];
            if (v[i][j] == '#') {
                vv.push_back({i, j});
            }
        }
    }
    int xa = vv[vv.size() / 2].first;
    int ya = vv[vv.size() / 2].second;

    cout << xa + 1 << " " << ya + 1 << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
