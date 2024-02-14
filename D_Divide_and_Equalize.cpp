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
    unordered_map<int,int>mp;
    for(int i=0; i<n; i++){
        int a;
        cin>>a;
        int tp=a;
        for(int j=2; j*j<=tp; j++){
           while(a%j==0){
            mp[j]++;
            a/=j;
           }
        }
        if(a!=1) mp[a]++;
    }
        bool ans=true;
        for(auto x:mp){
            if((x.second%n)!=0){
                 ans=false;
                 break;
            }
        }
        if(ans)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
    
}