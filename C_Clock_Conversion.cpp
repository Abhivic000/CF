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
    string p="";
    p+=s[0];
    p+=s[1];
    int val=stoi(p);
    string k="";
    k+=s[3];
    k+=s[4];
    string g;
    int ans;
    if(val==0){
      ans=12;
      g="AM";
    }else if(val>12){
       g="PM";
       ans=(val-12);
    }else if(val==12){
       g="PM";
       ans=val;
    }else{
        g="AM";
        ans=val;
    }
    string q=to_string(ans);
    if(q.size()!=2){
        q='0'+q;
    }
    string res=q+":"+k+" "+g;
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