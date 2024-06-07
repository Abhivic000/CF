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

template<typename T, typename T1>T amax(T &a, T1 b) {if (b > a)a = b; return a;}
template<typename T, typename T1>T amin(T &a, T1 b) {if (b < a)a = b; return a;}

bool is_valid(vi &v) { 
    int n = v.size(); 
    vi vv(n - 1); 
    for(int i = 0; i < n - 1; i++) { 
        vv[i] = __gcd(v[i], v[i + 1]); 
    } 
    for(int i = 1; i < n - 1; i++) { 
        if(vv[i] < vv[i - 1]) { 
            return false; 
        } 
    } 
    return true; 
} 

void solve(int test_case) { 
    int n; 
    cin >> n; 
    vi v(n); 
    rep(i,0,n-1){
        cin>>v[i];
    } 
    vi vv(n - 1); 
    rep(i,0,n-2){ 
        vv[i] = __gcd(v[i], v[i + 1]); 
    } 
    int idx = -1; 
    rep(i,1,n-2){ 
        if(vv[i] < vv[i - 1]) { 
            idx = i; 
            break; 
        } 
    } 
    if(idx == -1){ 
        cout << "YES" << endl; 
        return; 
    } 
    rep(j,idx - 1,idx+1){ 
        vi vvv; 
        for(int i = 0; i < n; i++) { 
            if(i != j) { 
                vvv.pb(v[i]); 
            } 
        } 
        if(is_valid(vvv)) { 
            cout << "YES" << endl; 
            return; 
        } 
    } 
    cout << "NO" << endl; 
} 

signed main() { 
    ios_base::sync_with_stdio(false); 
    cin.tie(0); cout.tie(0); 
    int t = 1; 
    cin >> t; 
    while (t--) solve(t); 
    return 0; 
}
