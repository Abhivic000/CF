#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int t;
    cin>>t;

    while (t--){
       int n,m;
       cin>>n>>m;
       vector<int>v(n);
       int maxi = INT_MAX;
       for(int i=0; i<n; i++){
        cin>>v[i];
       }
       for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
           if((v[i]+v[j])%m==0){
            maxi=min(maxi,v[i]+v[j]);
           }
        }
       }
       cout<<maxi/m<<endl;
    }
     
    return 0;
}