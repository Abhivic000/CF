#include<bits/stdc++.h>
using namespace std;

int main(){
    
   int n,m;
   cin>>n>>m;

   int sum1=0;
   int sum2=0;

   int arr1[n];
   int arr2[m];

   for(int i=0; i<n; i++){
     cin>>arr1[i];
   }

   for(int j=0; j<m; j++){
     cin>>arr2[j];
   }
   
   for(int i=0; i<n; i++){
     sum1 += arr1[i];
   }
   for(int j=0; j<m; j++){
     sum2 += arr2[j];
   }

  if(sum1 == sum2){
    cout<<"Yes";
  }
  else{
    cout<<"No";
  }


    return 0;
}