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
    int n, c, d;
    cin >> n >> c >> d;
    map<int,int>mp;
    ll maxi=INT_MAX;
    rep(i,0,(n*n) - 1){
        ll x;
        cin>>x;
        maxi=min(maxi,x);
        mp[x]++;
    }
    ll val=maxi;
    ll mov;
    rep(i,0,n-1){
        val=maxi+i*c;
        mov=val;
        if(!mp[mov]){
            cout<<"NO"<<endl;
            return;
        }
        rep(j,0,n-1){
            mov=val+j*d;
            if(!mp[mov]){
                cout<<"NO"<<endl;
                return;
            }
            mp[mov]--;
        }
    }
    cout<<"YES"<<endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
    
}