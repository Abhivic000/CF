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

bool check(int n){
    while(n>0){
        int val=n%10;
        if(val==1 || val==0){
            n=n/10;
            continue;
        }
        return false;
    }
    return true;
}

void solve(){
    vector<int>v;
    for(int i=1;i<=1e5;i++){
        if(check(i)){
            v.push_back(i);
        }
    }
    int n;
    cin>>n;
    int cnt=v.size()-1;
    while(n>0 && cnt>=0){
        if(v[cnt]!=1 && n%v[cnt]==0){
            n=n/v[cnt];
            continue;
        }
        cnt--;
    }
    cout<<(n > 1 ? "NO" : "YES")<<endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
    
}