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
    int n,m,k;
    cin>>n>>m>>k;
    vi v(n),l(m);
    vi v1(k+1);
    int cnt=0;
    set<int>s1,s2;
    rep(i,0,n-1){
        cin>>v[i];
        if(v[i]<=k) s1.insert(v[i]);
        if(v[i]<=k) v1[v[i]]=1;

    }
    rep(i,0,m-1){
        cin>>l[i];
        if(l[i]<=k) s2.insert(l[i]);
        if(l[i]<=k) v1[l[i]]=1;
    }
    rep(i,1,k){
    cnt+=v1[i];
    }
    if(s1.size()>=k/2 && s2.size()>=k/2 && cnt==k){
       cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
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