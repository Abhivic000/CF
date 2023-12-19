#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int t;
    cin>>t;

    int arr[t];
    int sum=1;

    for(int i=0; i<t; i++){
      cin>>arr[i];
    }
     sort(arr,arr+t);
     
     int m = arr[0];

    for(int i=0; i<t; i++){
     if(m==arr[i+1]) sum += 1;
    }

    if(sum%2==0) cout<<"Unlucky";
    else cout<<"Lucky";
     
    return 0;
}