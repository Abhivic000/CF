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
    // Code here abhivic
    int n,k,ans=0,c=0;
        cin>>n>>k;
 
        string s;
        cin>>s;
 
        vi v1(26);
        vi v2(26);
 
        rep(i,0,n-1){
            if(s[i]>=65 && s[i]<=90){
                v1[s[i]-65]++;
            }
            else{
                v2[s[i]-97]++;
            }
        }
        rep(i,0,25){
            ans += min(v1[i],v2[i]);
            c += abs(v1[i]-v2[i])/2;
        }
        cout<<ans + min(c,k)<<endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
    
}