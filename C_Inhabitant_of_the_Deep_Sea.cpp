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
    ll a, b;
    cin>>a>>b;
    vi v(a);
    rep(i,0,a-1){
        cin>>v[i];
    }
    ll b1= b/2 + b%2;
    ll b2=(b/2);
    ll l=0,r=a-1;
    ll sink=0;
    while(b1>0 && l<=r){
        if(v[l]<=b1){
            b1-=v[l];
            sink++;
            v[l]=0;
            l++;
        }else{
            v[l]-=b1;
            b1=0;
        }
    }
    while(b2>0 && l<=r){
        if(v[r]<=b2){
            b2-=v[r];
            sink++;
            v[r]=0;
            r--;
        }else{
            v[r]-=b2;
            b2=0;
        }
    }
    cout<<sink<<endl;
}


signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
    
}