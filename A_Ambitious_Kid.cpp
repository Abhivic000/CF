#include<bits/stdc++.h>
using namespace std;

int main(){
   
       int n;
       cin>>n;
       int mini = INT_MAX;
       vector<int>arr(n);
       for(int i=0; i<n; i++){
        cin>>arr[i];
       }
       for(int i=0; i<n; i++){
         if(abs(arr[i])<mini){
            mini = abs(arr[i]);
         }
       }
       
       cout<<mini<<endl;
     
    return 0;
}