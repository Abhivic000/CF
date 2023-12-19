#include<bits/stdc++.h>
using namespace std;

void selection_sort(int arr[],int n){
    for(int i=0; i<n-1; i++){
      int min_i =i;
      for(int j=i; j<=n-1;j++){
        if(arr[j]<arr[min_i]){
            min_i =j;
        }
      }
      swap(arr[i],arr[min_i]);
    }
}


int main(){
    
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    selection_sort(arr,n);

    for(int j=0; j<n;j++){
        cout<<arr[j]<<" ";
    }
    
     
    return 0;
}