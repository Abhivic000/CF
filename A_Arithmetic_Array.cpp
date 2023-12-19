#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int t;
    cin>>t;

    while (t--){
       int n;
       cin>>n;
       int arr[n];
       int sum =0;
       
       for(int i=0; i<n; i++){
        cin>>arr[i];
       }
       for(int i=0; i<n; i++){
        sum += arr[i];
       }
         
         if(sum==n){
            cout<<0<<endl;
         }
         else if(sum>n){
            int q = sum - n;
            cout<<q<<endl;
         }
         else if(sum<n){
            cout<<1<<endl;
         }
         else {
            cout<<-1<<endl;
         }
    }
     
    return 0;
}