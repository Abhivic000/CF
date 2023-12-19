#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int t;
    cin>>t;

    while (t--){
       int n, q;
       cin>>n>>q;
       long long sum =0;
       int type,x;
       long long arr[n];
       for(int i=0; i<n; i++){
        cin>>arr[i];
       }

       while(q--){
       int type, x;
            cin >> type >> x;

            if (type == 0) {
                for (int i = 0; i < n; i++) {
                    if (arr[i] % 2 == 0) {
                        sum += arr[i];
                    }
                }
            } else if (type == 1) {  // Change this to type == 1
                for (int i = 0; i < n; i++) {
                    if (arr[i] % 2 != 0) {
                        sum += arr[i];
                    }
                }
            }

            cout << sum << endl;
        }
    }
     
    return 0;
}