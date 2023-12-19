#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int t;
    cin>>t;

    while (t--){
        int l1, r1, l2, r2;
        cin >> l1 >> r1 >> l2 >> r2;
        cout << ((max(l1, l2) <= min(r2, r1)) ? max(l1, l2) : l1 + l2) << endl; 
    }
     
    return 0;
}