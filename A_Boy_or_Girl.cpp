#include<bits/stdc++.h>
using namespace std;

int main(){
    
    string s;
    cin>>s;
    int cnt =0;
    int n = s.size();
    
     unordered_set<char>d;
 
    for (int i = 0; i < s.size(); i++) {
 

        d.insert(s[i]);
    }
 
    // Return Answer
    int p = d.size();
    
    if(p%2==0){
        cout<<"CHAT WITH HER!";
    }
    else{
        cout<<"IGNORE HIM!";
    }
    return 0;
}