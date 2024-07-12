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

void solve() {
     ll n, m;
    cin >> n >> m;
    vector<vector<ll>> mat(n, vector<ll>(m));
    
    // Input matrix
    rep(i, 0, n - 1) {
        rep(j, 0, m - 1) {
            cin >> mat[i][j];
        }
    }
    
    // Temporary matrix to store updated values
    vector<vector<ll>> temp(n, vector<ll>(m, 0));
    
    // Iterate through each element of the matrix
    rep(i, 0, n - 1) {
        rep(j, 0, m - 1) {
            ll val = mat[i][j]; // Initialize val with current element
            // Check all four neighbors
            if (i - 1 >= 0) {
                val = max(val, mat[i - 1][j]); // Up neighbor
            }
            if (j - 1 >= 0) {
                val = max(val, mat[i][j - 1]); // Left neighbor
            }
            if (i + 1 < n) {
                val = max(val, mat[i + 1][j]); // Down neighbor
            }
            if (j + 1 < m) {
                val = max(val, mat[i][j + 1]); // Right neighbor
            }
            // Update temp[i][j] with the maximum value found
            temp[i][j] = val;
        }
    }
    
    // Output the updated matrix
    rep(i, 0, n - 1) {
        rep(j, 0, m - 1) {
            cout << temp[i][j] << " ";
        }
        cout << endl;
    }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
