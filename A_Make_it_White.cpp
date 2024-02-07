#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int t;
    cin>>t;

    while (t--){
       int n;
       cin>>n;
       string s;
       cin>>s;
       int st,en;
       for(int i=0; i<s.size(); i++){
        if(s[i]=='B') st=i;
       }
       for(int i=s.size()-1; i>=0; i--){
        if(s[i]=='B') en=i;
       }
       cout<<abs(en-st)+1<<endl;

    }
     
    return 0;
}