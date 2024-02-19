#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

typedef pair<int,int> pi;

#define fr     first
#define sc     second
#define pb     push_back
#define pob    pop_back
#define pf     push_front
#define pof    pop_front

template<typename T, typename T1>T amax(T &a, T1 b) {if (b > a)a = b; return a;}
template<typename T, typename T1>T amin(T &a, T1 b) {if (b < a)a = b; return a;}

void solve() {
    int n;
    cin>>n;
    vector<string>v;
    vector<int>val;
    for(int i=0; i<n; i++){
        string s;
        cin>>s;
        v.push_back(s);
    }
    for(int i=0; i<n; i++){
        string p=v[i];
        ll cnt=count(p.begin(),p.end(),'1');
        if(cnt>0){
        val.push_back(cnt);
        }
    }
    bool ans=true;
    for(int i=0; i<val.size()-1; i++){
        if(val[i]!=val[i+1]){
            ans=false;
        }
    }
    if(ans) cout<<"SQUARE"<<endl;
    else cout<<"TRIANGLE"<<endl;
    
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
    
}