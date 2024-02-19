#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int t;
    cin>>t;

    while (t--){
       string s;
       cin>>s;
       int p=count(s.begin(),s.end(),'A');
       int q=count(s.begin(),s.end(),'B');
       if(p>q) cout<<"A"<<endl;
       else cout<<"B"<<endl;
    }
     
    return 0;
}