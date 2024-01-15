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
    ll n,f,a,b;
    cin>>n>>f>>a>>b;
    vi v(n);
    rep(i,0,n-1){
        cin>>v[i];
    }
    ll cnt=0;
    ll mini;
    rep(i,0,n-1){
        mini = min(b,abs(v[i]-cnt)*a);
        f -=mini;
        cnt=v[i];
    }
    if(f>0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
    
}