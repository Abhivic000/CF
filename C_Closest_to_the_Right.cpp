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
        ll x;
        cin>>x;
        int low=1, high = n;
        int ans=n;
    while(low<=high){
        int mid = (low+high)/2;
        if(v[mid]>x){
            ans=mid;
            high=mid-1;
        }else{
            low=mid+1;
        }
    }
    cout<<ans<<endl;
    }
     
    return 0;
}