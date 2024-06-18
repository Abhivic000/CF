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
    int b = 0, r = 0;
    bool f = false;
    for(char c:s){
        if(c=='B') b++;
        else if(c=='R')r++;
        else if(c=='W'){
            if((b==0 && r!=0) || (b!=0 && r==0)){
                f=true;
            }
            b=0;r=0;
        }
    }
    if((b==0 && r!=0) || (b!=0 && r==0)) f=true;
    if(f){
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
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