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

#define rep(i,a,b) for (ll i = a; i <= b; i++)

int main(){
     
    ll n,q;
    cin>>n>>q;

    vi v(n);
    rep(i,0,n-1){
        cin>>v[i];
    }
    while(q--){
        ll p;
        cin>>p;
        ll l=0,r=n-1;
        while(l<=r){
            int m=(l+r)/2;
            if(v[m]==p){
                cout<<m+1<<endl;
                break;
            }else if(v[m])
        }
    }
     
    return 0;
}