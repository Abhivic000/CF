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
       int fcnt=n-1;
       int cnt=0;
       for(int i=1; i<n; i++){
        if(s[i-1]==s[i+1]){
            cnt++;
        }
       }
       cout<<fcnt-cnt<<endl;
    }
     
    return 0;
}