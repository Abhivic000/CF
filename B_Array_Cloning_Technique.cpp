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
    ll n;
    cin>>n;
    vi v(n);
    rep(i,0,n-1){
        cin>>v[i];
    }
    if(n==1){
        cout<<0<<endl;
        return;
    }
    map<int,int>mp;
    for(auto x:v){
        mp[x]++;
    }
    ll maxi=0;
    for(auto x:mp){
        if(x.second>maxi){
            maxi=x.second;
        }
    }
    ll val=n-maxi,cnt=0;
    ll val2=val;
    while(val>0){
        cnt++;
        val-=maxi;
        maxi*=2;
    }
    cout<<cnt+val2<<endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
    
}