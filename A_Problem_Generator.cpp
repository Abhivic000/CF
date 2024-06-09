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
    int n,m;
    cin>>n>>m;
    string s;
    string k="ABCDEFG";
    cin>>s;
    map<char,int>mp;
    for(auto x:s){
        mp[x]++;
    }
    ll cnt=0;
    for(int i=0; i<7; i++){
       if(mp[k[i]]<m){
        cnt+=(m-mp[k[i]]);
       }
    }
    if(mp.size()!=7){
        cnt+=((7-mp.size())*m);
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