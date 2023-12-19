#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int t;
    cin>>t;

    while (t--){
        string s;
        cin>>s;

        
       int n = s.length();
        
       string p = s;

        for (int i = 0; i < n / 2; i++)
         swap(p[i], p[n - i - 1]);

         
         cout<<s<<p<<endl;
    }
     
    return 0;
}