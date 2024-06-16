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
    ll a,b,n;
    cin>>a>>b>>n;
    ll x=0,j=-1;
    rep(i,0,9){
        x=a;
        a=a*10+i;
        if(a%b==0){
            j=i;
            break;
        }
        a=x;
    }
    if(j==-1){
        cout<<-1<<endl;
        return;
    }
    string s=to_string(a);
    rep(i,1,n-1){
        s+='0';
    }
    cout<<s<<endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t = 1;
    //cin >> t;
    while (t--) solve();
    return 0;
    
}