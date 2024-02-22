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
    ll n,m,p;
    cin>>n>>m>>p;
    ll cnt=0;
    vector<ll>v(n);
    rep(i,0,n-1){
        cin>>v[i];
    }
    vector<ll>r(m);
    rep(i,0,m-1){
        cin>>r[i];
    }
    
    ll mini = *min_element(v.begin(),v.end());
    ll maxi = *max_element(v.begin(),v.end());

    rep(i,0,m-1){
        if(r[i]>=(mini-p) && r[i]<=(maxi+p)){
            cnt++;
        }
    }
    cout<<cnt<<endl;

}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t = 1;
    while (t--) solve();
    return 0;
    
}