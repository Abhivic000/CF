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
    int n;
    cin>>n;
    vector<string>v(n);
    int res=0;
    rep(i,0,n-1){
        cin>>v[i];
    }
    for(int i=0; i<n/2; i++){
        for(int j=0; j<n/2; j++){
            vector<char>temp{v[i][j],v[n-1-i][n-1-j],v[n-1-j][i],v[j][n-1-i]};
            char k=*max_element(temp.begin(),temp.end());
            for(auto c:temp){
               res+=k-c;
            }
        }
    }
    cout<<res<<endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
    
}