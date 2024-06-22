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
    ll n,m,k;
    cin>>n>>m>>k;
    vector<ll> mat;
    for(int i=0;i<n*m;i++){
        int x;
        cin>>x;
        mat.push_back(x);
    }
    sort(mat.begin(),mat.end());
    ll med=mat[n*m/2];
    ll ans=0;
    for(int i=0;i<n*m;i++){
        ans+=abs(med-mat[i]);
    }
    if(ans%k==0) cout<<ans/k;
    else cout<<"-1";
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t = 1;
   // cin >> t;
    while (t--) solve();
    return 0;
    
}