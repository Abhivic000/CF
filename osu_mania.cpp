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
    ll n;
    cin >> n;
    
    vi columns;
    rep(i, 1, n) {
        string row;
        cin >> row;
        rep(j, 0, row.size() - 1) {
            if (row[j] == '#') {
                columns.pb(j + 1); 
                break;
            }
        }
    }

    for (int i = n - 1; i >= 0; i--) {
        cout << columns[i] << " ";
    }
    cout << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    int t = 1;
    cin >> t;
    while (t--) solve();
    
    return 0;
}
