#include<bits/stdc++.h>
using namespace std;

int main(){
    
  int n;
  cin>>n;
  int cnt=0;
  int cnt2=0;
  string arr[n];
  string g;
  for(int i=0; i<n; i++){
    cin>>arr[i];
  }
  for(int i=0; i<n; i++){
    if(arr[i]==arr[0]){
        cnt++;
    }
    if(arr[i]!=arr[0]){
        g=arr[i];
        cnt2++;
    }
  }
  
  if(cnt>cnt2){
    cout<<arr[0];
  }else{
    cout<<g;
  }
  
     
    return 0;
}