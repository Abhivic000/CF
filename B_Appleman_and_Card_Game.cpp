#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

typedef vector<ll> vi;
typedef pair<ll,ll> pi;

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
    ll n,m;
    cin>>n>>m;
    string s;
    cin>>s;
    map<char,int>mp;
    for(auto x:s){
        mp[x]++;
    }
    ll maxi=0,sum=0;
    vi v;
    for(auto x:mp){
        v.push_back(x.second);
    }
    sort(v.begin(),v.end());
    for(int i=v.size()-1; i>=0; i--){
       if(v[i]<=m){
        sum+=(v[i]*v[i]);
        m-=v[i];
       }else{
        sum+=(m*m);
        m=0;
       }
       if(m==0) break;
    }
    cout<<sum<<endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t = 1;
   // cin >> t;
    while (t--) solve();
    return 0;
    
}