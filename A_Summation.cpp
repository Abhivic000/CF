#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int t;
    cin>>t;
    int arr[t];

    int sum =0;

  for(int i=0; i<t; i++){
    cin>>arr[i];
  }
  for(int i=0; i<t; i++){
    sum += arr[i];
  }
  cout<<abs(sum)<<endl;
     
    return 0;
}