#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int t;
    cin>>t;

    while (t--){
        string n;
        cin>>n;
        cout<<(n.size()-1)*9+(n[0]-'0')<<endl;

    }
     
    return 0;
}