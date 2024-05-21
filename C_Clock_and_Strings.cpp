#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

typedef vector<int> vi;
typedef pair<int, int> pi;

#define fr first
#define sc second
#define pb push_back
#define pob pop_back
#define pf push_front
#define pof pop_front

#define rep(i,a,b) for (int i = a; i <= b; i++)

template<typename T, typename T1>T amax(T &a, T1 b) {if (b > a)a = b; return a;}
template<typename T, typename T1>T amin(T &a, T1 b) {if (b < a)a = b; return a;}

bool check(int x, int y, int z){
    if (x <= y){
        return z >= x && z <= y;
    }else{
        return z >= x || z <= y;
    }
}

bool valid(int p, int q, int r, int s){
    int m = min(p, q);
    int n = p + q;
    int o = n - m;
    int e = min(r, s);
    int f = r + s;
    int g = f - e;
    return check(m, o, e) != check(m, o, g) || check(e, g, m) != check(e, g, o);
}

signed main()
{
    int t;
    cin >> t;
    while (t--){
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if (valid(a, b, c, d)){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }

    return 0;
}
