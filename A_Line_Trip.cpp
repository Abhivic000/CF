#include<bits/stdc++.h>
using namespace std;


int main(){
    
    int t;
    cin>>t;

    while (t--){
       int n,k;
       cin>>n>>k;
       int maxi = INT_MIN;
       int m=n+1;
       vector<int>arr(m,0);
       
       for(int i=1; i<m; i++){
        cin>>arr[i];
       }
       if(n>1){
         for(int i=0; i<m-1; i++){
          int val = arr[i+1]-arr[i];
          if(val>maxi){
            maxi = val;
          }
       }
       }else{
        maxi = arr[1];
       }
       
       int cal = k-arr[n] + k-arr[n];
       if(cal>maxi){
        cout<<cal<<endl;
       }else{
        cout<<maxi<<endl;
        }
       
    }
     
    return 0;
}