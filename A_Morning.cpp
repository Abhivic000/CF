#include<bits/stdc++.h>
using namespace std;


int main(){
    
    int t;
    cin>>t;

    while (t--){
        string s;
        cin>>s;
        int n = s.size();
        int a = (s[0] - '0');
        if(s[0] == '0') a = 10;
        
        int ans = (a - 1) + 1;
 
        for(int i=0;i<n-1;i++){
            
            int x = s[i] - '0';
            int y = s[i+1] - '0';
 
            if(x == 0) x = 10;
            if(y == 0) y = 10;
 
            ans += (abs(x - y) + 1);
 
        }
 
 
        cout<<ans<<endl;
    }
     
    return 0;
}