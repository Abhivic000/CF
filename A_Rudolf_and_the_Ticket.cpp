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
    ll n,m,k;
    cin>>n>>m>>k;
    vi v(n),p(m);
    ll cnt=0;
    rep(i,0,n-1){
        cin>>v[i];
    }
    rep(i,0,m-1){
        cin>>p[i];
    }
    rep(i,0,n-1){
        rep(j,0,m-1){
         if((v[i]+p[j]) <=k) cnt++;
        }
    }
    cout<<cnt<<endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
    
}