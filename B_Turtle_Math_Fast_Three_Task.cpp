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
   ll n,sum=0,cnt=0;cin>>n;
        vi v(n);
        rep(i,0,n-1){
            cin>>v[i];
        }
        rep(i,0,n-1){
            sum+=v[i];
        }
        if(sum%3==0){
            cout<<0<<endl;
        }
        else{
            if((sum+1)%3==0){
                cout<<1<<endl;
            }
            else{
                int ans=0;
                rep(i,0,n-1){
                    int temp=sum;
                    temp=temp-v[i];
                    if(temp%3==0){
                        cout<<1<<endl;
                        ans=1;
                        break;
                    }
                }
                if(ans==0){
                    cout<<2<<endl;
                }
            }
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