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
   ll n, ans = 0;
        cin>>n;
        vector <ll> a(n),b(n),c(n);
        vector <pair <ll,ll>> va,vb,vc;
        for(ll i = 0; i<n;i++){
            cin>>a[i];
            va.push_back(make_pair(a[i],i));
        }
        for(ll i=0;i<n;i++){
            cin>>b[i];
            vb.push_back(make_pair(b[i],i));
        }
        for(ll i=0;i<n;i++){
            cin>>c[i];
            vc.push_back(make_pair(c[i],i));
        }
        sort(va.begin(),va.end(),greater<>());
        sort(vb.begin(),vb.end(),greater<>());
        sort(vc.begin(),vc.end(),greater<>());
 
        for(ll i =0; i<3;i++){
            for(ll j=0;j<3;j++){
                for(ll k = 0;k<3;k++){
                    if(va[i].second!=vb[j].second && va[i].second!=vc[k].second && vb[j].second!=vc[k].second){
                        ans = max(va[i].first + vb[j].first + vc[k].first,ans);
                    }
                }
            }
        }
        cout<<ans<<endl;
    }


signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
    
}