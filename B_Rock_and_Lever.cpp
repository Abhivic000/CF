#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int t;
    cin>>t;

    while (t--){
       int n;
       cin>>n;
       long long cnt=0;
       vector<long long>v(n);
       for(int i=0; i<n; i++){
        cin>>v[i];
       }
       for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
         if((v[i] & v[j]) >= (v[i]^v[j])){
            cnt++;
         }
        }
       }
       cout<<cnt<<endl;
    }
     
    return 0;
}