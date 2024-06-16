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

#define rep(i,a,b) for (ll i = a; i <= b; i++)
// for (int i = 1; i <= n; i++) { }
//rep(i,1,n) { }

template<typename T, typename T1>T amax(T &a, T1 b) {if (b > a)a = b; return a;}
template<typename T, typename T1>T amin(T &a, T1 b) {if (b < a)a = b; return a;}

void solve() {
    ll n;
    cin>>n;
    vi v(n),vv(n);
    rep(i,0,n-1){
        cin>>v[i];
        vv[i]=v[i];
    }
    sort(begin(v),end(v));
    ll a=-1,b=-1;
    rep(i,0,n-1){
        if(v[i]!=vv[i]){
            if(a==-1) a=i;
            b=i+1;
        }
    }
    reverse(vv.begin()+a,vv.begin()+b);
    if(is_sorted(vv.begin(),vv.end())){
       cout<<"yes"<<endl;
       if(a==-1) a=0;
       if(b==-1) b=1;
       cout<<a+1<<" "<<b<<endl;
    }else{
        cout<<"no"<<endl;
    }

}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t = 1;
    //cin >> t;
    while (t--) solve();
    return 0;
    
}