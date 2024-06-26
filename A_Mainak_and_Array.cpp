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
    ll maxi=INT_MIN;
    rep(i,0,n-1){
        cin>>v[i];
    }
    //ll min1=*min_element(v.begin(),v.end());
    //ll max1=*max_element(v.begin(),v.end());
    //maxi=max(maxi,max1-min1);

    rep(i,0,n-1){
        maxi=max(maxi,(ll)(v[(i-1+n)%n]-v[i]));
    }
    rep(i,1,n-1){
        maxi=max(maxi,(ll)(v[i]-v[0]));
    }
    rep(i,0,n-2){
        maxi=max(maxi,(ll)(v[n-1]-v[i]));
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