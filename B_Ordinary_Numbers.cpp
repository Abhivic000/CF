#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    
    int t;
    cin >> t;

    while (t--){
       ll n;
       cin >> n;
       ll cnt = 0;
       string s= to_string(n);
       string st="";
       for(ll i=0; i<s.size(); i++) st+=s[0]; 
        cnt+=((s.size()-1)*9);
        cnt+=(s[0]-'0');
        if(stoll(st)>stoll(s)) cnt--;
       cout << cnt << endl;
    }
     
    return 0;
}
