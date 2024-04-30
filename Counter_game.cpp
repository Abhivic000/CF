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

bool isPowerOfTwo(ll n){
    return (n & (n - 1)) == 0;
}

string counterGame(ll n){
    int mo = 0;
    while (n != 1) {
        if (isPowerOfTwo(n)){
            n /= 2;
        } else {
            ll lpt = pow(2, floor(log2(n)));
            n -= lpt;
        }
        mo++;
    }
    return (mo % 2 == 1) ? "Louise" : "Richard";
}

void solve(){
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        cout << counterGame(n) << endl;
    }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    solve();
    return 0;
}
