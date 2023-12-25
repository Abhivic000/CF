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
    cin >> s;
    string a = "";
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '.') {
            a += '0';
        } else if (s[i] == '-' && i + 1 < s.size() && s[i + 1] == '.') {
            a += '1';
            i++;
        } else if (i + 1 < s.size() && s[i + 1] == '-' && s[i] == '-') {
            a += '2';
            i++;
        }
    }
    cout << a;

}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t = 1;
    //cin >> t;
    while (t--) solve();
    return 0;
    
}