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
    ll l,m,n,o;
    cin>>l>>m>>n>>o;
    ll dif1=m-l;
    ll dif2=o-n;
    if(l>o || n>m){
        cout<<1<<endl;
    }else if((l<n && m>o) || (n<l && o>m)){
        cout<< min(dif1,dif2)+2<<endl;
    }else if((l!=n && m==o) || (l==n && m!=o)){
        cout<< min(dif1,dif2)+1<<endl;
    }else if(l==n && m==o){
        cout<<dif1<<endl;
    }else{
        cout<<min(abs(l-o),abs(m-n))+2<<endl;
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