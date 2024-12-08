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
    string s;
    cin>>s;
    vi v;
    ll sum=0;
    for(int i=n-1; i>=0; i--){
        v.pb(sum);
        if(s[i]=='1') sum+=1;
        else sum-=1;
    }
    sort(rbegin(v),rend(v));
    int psum=0, res=-1;
    rep(m,2,n){
        if(m-2<v.size()){
            psum+=v[m-2];
            if(psum>=k){
                res=m;
                break;
            }
        }
    }
    cout<<res<<endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
    
}