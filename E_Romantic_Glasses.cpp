#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int t;
    cin>>t;

    while (t--){
       int n;
       cin>>n;
       bool ans = false;
       int sum=0;
       int arr[n];
       for(int i=0; i<n; i++){
        cin>>arr[i];
       }
       int j=0;
       for(int i=n-1; i<=0; i--){
           sum+=arr[i];
           if(sum%2==0){
            ans = true;
            break;
           }
           sum-=arr[j];
           j++;
       }
       if(ans) cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
    }
     
    return 0;
}