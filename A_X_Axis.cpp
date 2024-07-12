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
    ll a,b,c;
    cin>>a>>b>>c;
    ll cnt=0;
    vi v;
    v.push_back(a);
    v.push_back(b);
    v.push_back(c);
    sort(begin(v),end(v));
    map<int,int>mp;
    for(auto x:v){
        mp[x]++;
    }
    ll val=v[1];
    for(auto x:mp){
        if(x.second>=2){
            val=x.first;
        }
    }
    cnt+=abs(a-val);
    cnt+=abs(b-val);
    cnt+=abs(c-val);
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