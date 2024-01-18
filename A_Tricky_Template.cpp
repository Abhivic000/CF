#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int t;
    cin>>t;

    while (t--){
       int n;
       cin>>n;
       string a,b,c;
       cin>>a>>b>>c;
       bool ans=false;
       for(int i=0; i<n; i++){
       if(a[i]!=b[i] && b[i]!=c[i] && c[i]!=a[i]){
        ans=true;
       }
       if(a[i]==b[i] && a[i]!=c[i]){
        ans=true;
       }
       }
       if(ans) cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
    }
     
    return 0;
}