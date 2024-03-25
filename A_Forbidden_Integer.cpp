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
    ll n,k,x;
    cin>>n>>k>>x;
    vi v;
    if(k==1){
      cout<<"NO"<<endl;
      return;
    }
    if(x!=1){
      cout<<"YES"<<endl;
      cout<<n<<endl;
      rep(i,0,n-1){
        cout<<"1 ";
      }
        cout<<endl;
        return;
      
    }
    if(n%2 && k==2){
      cout<<"NO"<<endl;
      return;
    }
    if(n%2==0){
      cout<<"YES"<<endl;
      cout<<(n/2)<<endl;
      rep(i,0,(n/2) -1){
         cout<<"2 ";
      }
      cout<<endl;
      return;
    }
    ll total=(n/2);
    cout<<"YES"<<endl;
    cout<<total<<endl;
    for(ll i=0; i<(n/2-1); i++)
      cout<<"2 ";
      
      cout<<"3 ";
      cout<<endl;
    
  
}  

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
    
}