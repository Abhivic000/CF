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
    rep(i,0,n-1){
        cin>>v[i];
    }
    ll cnt=0;
    if(v[0]>v[n-1]){
        cout<<-1<<endl;
        return;
    }
    if(n==1){
        cout<<0<<endl;
        return;
    }
    for(int i=n-1; i>=1; i--){
       if(v[i]<=v[i-1]){
        //cout<<"v[i-1]"<<v[i-1]<<endl;
        while(v[i]<=v[i-1]){
            if(v[i-1]==0){
                break;
            }
             v[i-1]/=2;
             cnt++;
        }
       }
    }
    cout<<cnt<<endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
    
}