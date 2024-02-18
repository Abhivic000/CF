#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int t;
    cin>>t;

    while (t--){
       int n;
       cin>>n;
       string s;
       cin>>s;
       bool ans=true;
       for(int i=0; i<n-1; i++){
        if(s[i]!=s[i+1]){
         for(int j=i+1; j<n; j++){
            if(s[i]==s[j]){
                ans = false;
                break;
            }
         }
        }
       }
       if(ans) cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
    
    }
     
    return 0;
}