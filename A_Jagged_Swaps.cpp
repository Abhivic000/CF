#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int t;
    cin>>t;

    while (t--){
       int n;
       cin>>n;
       bool ans = false;
       vector<int>v(n);
       for(int i=0; i<n; i++){
        cin>>v[i];
        if(v[0]==1){
            ans =true;
        }
       }

    
       if(ans) cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
    }
     
    return 0;
}