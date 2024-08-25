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
    string s;
    cin>>s;
    map<char,int>mp;
    for(auto x:s){
        mp[x]++;
    }
    if(mp.size()<3){
        cout<<s<<endl;
        return;
    }
    vector<pair<int,char>>p;
    for(auto x:mp){
        p.push_back({x.second,x.first});
    }
    sort(begin(p),end(p));
    string ss="";
    ll j=0,i=0;
    while(i<n){
        if(j==p.size()) j=0;
        if(p[j].first>0){
            ss+=p[j].second;
            p[j].first--;
            i++;
        }
        j++;
    }
    cout<<ss<<endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
    
}