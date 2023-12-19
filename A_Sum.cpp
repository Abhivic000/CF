#include<bits/stdc++.h>
using namespace std;


int main(){
    
    int t;
    cin>>t;

    while (t--){
       int a,b,c;
       cin>>a>>b>>c;

       int sum = a+b+c;
    
       int ans = max(a, max(b, c));

       int dif = sum - ans;
     
       if (ans == dif) cout<<"YES"<<endl;
       else cout<<"NO"<<endl;

    }
     
    return 0;
}