#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int t;
    cin>>t;

    while (t--){
       string s;
       cin>>s;
       int x = count(s.begin(),s.end(),'0');
       int y = s.size()-x;
       int l = min(x,y);
       if(l&1==1) cout<<"DA"<<endl;
       else cout<<"NET"<<endl;
    }
     
    return 0;
}