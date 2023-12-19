#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int t;
    cin>>t;

    while(t--){
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int j=0; j<n; j++){
            cin>>arr[j];
        }
         bool found = false;  
        
        for (int i = 0; i < n; i++) {
            if (arr[i] == k) {
                found = true;
                break;  
            }
        }
        
        if (found) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}