#include<bits/stdc++.h>
using namespace std;


int main(){
    
    int t;
    cin>>t;

    while (t--){
       int n;
       cin>>n;
       set<int>s;
       for(int i=0; i<n; i++){
        int x;
        cin>>x;
        s.insert(x);
       }
       int ss = s.size();

       if(ss<n) cout<<"NO"<<endl;
       else cout<<"YES"<<endl;


    }
     
    return 0;
}