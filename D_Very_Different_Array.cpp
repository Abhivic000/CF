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
// for (int i = 1; i <= n; i++) { }
//rep(i,1,n) { }

template<typename T, typename T1>T amax(T &a, T1 b) {if (b > a)a = b; return a;}
template<typename T, typename T1>T amin(T &a, T1 b) {if (b < a)a = b; return a;}

void solve() {
    // Code here abhivic
     int n, m;
    cin >> n >> m;
    vi v1(n), v2(m);
    rep(i, 0, n - 1) {
        cin >> v1[i];
    }
    rep(i, 0, m - 1) {
        cin >> v2[i];
    }
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end(), greater<int>());
    vi ans;
    int i = 0;

    while (ans.size() < n) {
        ans.push_back(abs(v2[i] - v1[i]));
        if(n>1 && m>1 && ans.size()<n){
        ans.push_back(abs(v1[n - i - 1] - v2[m - i - 1]));
        }
        i++;
    }

    int sum = accumulate(ans.begin(), ans.end(), 0);
    cout << sum << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
    
}