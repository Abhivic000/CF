#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int t;
    cin>>t;

    while (t--){
       int n;
       cin>>n;
       int p;
       int sum1=0,sum2=0;

       int arr[n];

       for(int i=0; i<n-1; i++){
        cin>>arr[i];
       
      
        if(arr[i]<0){
           arr[i]= abs(arr[i]);
             sum1 += arr[i];
        }
        else{
             sum2 += arr[i];
        }
       }
       cout<<sum1-sum2<<endl;
    }
     
    return 0;
}