#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    
    ll n,l,r,k;
    cin>>n>>l>>r>>k;
    vector<int>arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    ll b=(1<<n);
    ll cnt=0;
    for(ll i=0; i<b; i++){
        vector<int>val;
        ll sum=0;
        for(ll v=0; v<n; v++){
            if(i&(1<<v)){
                val.push_back(arr[v]);
                sum+=arr[v];
            }
        }
        if(val.size()>=2){
            int mini=*min_element(val.begin(),val.end());
            int maxi=*max_element(val.begin(),val.end());
            if(sum>=l && sum<=r && (maxi-mini)>=k) cnt++;
            
        }
    }
    cout<<cnt<<endl;
    
     
    return 0;
}