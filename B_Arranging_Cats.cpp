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
      int n;
    cin >> n;
    int cnt = 0;
    int sub=0;
    string s1, s2;
    cin >> s1;
    cin >> s2;
    int c1 = count(s1.begin(), s1.end(), '1');
    int c2 = count(s2.begin(), s2.end(), '1');
    if(c1>c2){
    sub = abs(c2 - c1);
    }
    for (int i = 0; i < s2.size(); i++) {
        if (s2[i] == '1' && s1[i] == '0') {
            cnt++;
        }
    }
    cout << cnt + sub << endl;

}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
    
}