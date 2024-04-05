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
    ll n,m;
    cin>>n>>m;
    vi v(n),k(n);
    ll sum=m;
    ll cnt=n-1;
    rep(i,0,n-1){
        cin>>v[i];
    }
    rep(i,0,n-1){
        cin>>k[i];
    }
    if(cnt==0){
        cout<<sum<<endl;
        return;
    }
    vector<pair<int,int>>l;
    rep(i,0,n-1){
        l.push_back({k[i],v[i]});
    }
    sort(l.begin(),l.end());
    rep(i,0,n-1){
        if(cnt>0 && l[i].first>m){
            sum+=m;
            cnt--;
        }
        else if(cnt>=l[i].second){
            sum+=(l[i].first * l[i].second);
            cnt-=l[i].second;
        }else if(cnt<l[i].second){
            sum+=(cnt*l[i].first);
            cnt=0;
        }else if(cnt==0) break;
    }
    cout<<sum<<endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
    
}