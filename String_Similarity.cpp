#include <bits/stdc++.h>
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

int sum(string p,string s){
    int cnt=0;
    for(int i=0; i<p.size(); i++){
        if(p[i]==s[i]){
            cnt++;
        } else {
            break;
        }
    }
    return cnt;
}

void solve() {
    string s;
    cin>>s;
    int f=0;
    for(int i=0; i<s.size(); i++){
        f += sum(s,s.substr(i));
    }
    cout<<f<<endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}
