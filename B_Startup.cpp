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
    ll n,k;
    cin>>n>>k;
    map<int,int>mp;
    while(k--){
        ll b,l;
        cin>>b>>l;
        if(mp.find(b)!=mp.end()){
            int val=mp[b];
            mp[b]=val+l;
        }else{
            mp[b]=l;
        }
    }
    ll maxi=0;
    if(mp.size()<=n){
    for(auto x:mp){
        maxi+=(x.second);
    }
    cout<<maxi<<endl;
    return;
    }
    vector<int>v;
    for(auto x:mp){
        v.push_back(x.second);
    }
    sort(rbegin(v),rend(v));
    int i=0;
    while(n--){
        maxi+=v[i];
        i++;
    }
    cout<<maxi<<endl;
    

}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
    
}