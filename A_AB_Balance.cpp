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
    string s;
    cin>>s;
    ll n=s.size();
    ll cnt1=0,cnt2=0;
    rep(i,0,n-2){
     if(s[i]=='a' && s[i+1]=='b') cnt1++;
    }
    rep(i,0,n-2){
     if(s[i]=='b' && s[i+1]=='a') cnt2++;
    }
    if(cnt1>cnt2){
        s[0]='b';
    }
    else if(cnt2==cnt2) {
        s[0]=s[0];
    }else{
        s[0]='a';
    }
    cout<<s<<endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
    
}