#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        vector<int>v(3);
        for(int i=0; i<3; i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        int op=0;
        if(v[2]%v[0]==0 && v[1]%v[0]==0){
            op+=(v[2]/v[0])-1;
            op+=(v[1]/v[0])-1;
        }else{
            cout<<"NO"<<endl;
            continue;
        }
        if(op<=3){ 
            cout<<"YES"<<endl;
            continue;
        }
        cout<<"NO"<<endl;
    }

    return 0;
}
