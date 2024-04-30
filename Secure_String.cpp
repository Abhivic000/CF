#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int cnt=0;
    int n=s.length();
    for(int i=0; i<n-1; i+=2){
        if(s[i]!=s[i+1]){
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}