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
    map<int,int>mp;
    vi d;
    ll z=1;
    rep(i,0,n-1){
        if(mp.find(v[i])==mp.end()){
           d.push_back(z);
           mp[v[i]]=z;
           z++;
        }else{
           d.push_back(mp[v[i]]);
        }
    }
    ll k;
    cin>>k;
    while(k--){
        string s;
        cin>>s;
        ll m=s.size();
        bool ans=true;
        if(m!=n){
            cout<<"NO"<<endl;
            continue;
        }
        vi q;
        ll o=1;
        map<char,int>mpp;
        rep(i,0,m-1){
        if(mpp.find(s[i])==mpp.end()){
           q.push_back(o);
           mpp[s[i]]=o;
           o++;
        }else{
           q.push_back(mpp[s[i]]);
        }
        }
        if(d==q){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
    
}