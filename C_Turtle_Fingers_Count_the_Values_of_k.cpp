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

ll pw(int ba,int en){
    ll val=1;
    rep(i,0,en-1){
        val*=ba;
    }
    return val;
}

void solve() {
   ll a,b,l;
   cin>>a>>b>>l;
    set<int>st;
    for(int i=0;;i++){
        ll pp=pw(a,i);
        if(pp>l) break;
    
    for(int j=0;;j++){
        ll po=pp*pw(b,j);
        if(po>l) break;

        if(l%po==0){
            st.insert(l/po);
        }
     }
    }
    cout<<st.size()<<endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
    
}