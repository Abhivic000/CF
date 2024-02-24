#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int t;
    cin>>t;

    while (t--){
       int n,k;
       cin>>n>>k;
       if((4*n-2)==k){
        cout<<2*n<<endl;
       }else{
        cout<<(k+1)/2<<endl;
       }
    }
     
    return 0;
}