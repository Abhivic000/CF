#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int a,b,c,d;
    cin>>a>>b>>c>>d;

    vector<int>v{a,b,c,d};
    set<int>s(v.begin(),v.end());
    
    int n = s.size();

    cout<<4-n;


    return 0;
}