#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    
    int t;
    cin>>t;

    while (t--){
       ll n;
       cin>>n;
       vector<ll>v(n);
       for(ll i=0; i<n; i++){
         cin>>v[i];
       }
       ll sum=v[0];
       for(ll i=1; i<n; i++){
         sum = ((sum+v[i])/v[i])*v[i];
       }
       cout<<sum<<endl;
    }
     
    return 0;
}