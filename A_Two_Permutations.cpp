#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int t;
    cin>>t;

    while (t--){
       int n,l,p;
       cin>>n>>l>>p;
       if(l+p+2<=n){
        cout<<"YES"<<endl;
       }else if(l==p && p==n){
        cout<<"YES"<<endl;
       }else{
        cout<<"NO"<<endl;
       }
    }
     
    return 0;
}