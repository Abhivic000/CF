#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            int x;
            cin>>x;
            a.push_back(x);     
        }
        long long p = pow(2,9);

        long long pro=0;
        for(int i=0; i<n; i++){
            pro *= a[i];
        }
        if(pro%p==0){
            cout<<0<<endl;
        }
        else{ cout<<-1<<endl;
        }
    }
    return 0;
}
