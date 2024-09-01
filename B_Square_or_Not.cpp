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
    string s;
    cin>>s;
    ll c=sqrt(n);
    if(n!=(c*c)){
        cout<<"No"<<endl;
        return;
    }
    rep(i,0,c-1){
        if(s[i]!='1' || s[n-c+1]!='1'){
            cout<<"No"<<endl;
            return;
        }
    }
    rep(j,1,c-2){
     if(s[j*c]!='1' || s[j*c+c-1]!='1'){
        cout<<"No"<<endl;
        return;
     }
    rep(i,1,c-2){
      if(s[i*c+j]!='0'){
        cout<<"No"<<endl;
        return;
      }
    }
    }
    cout<<"Yes"<<endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
    
}