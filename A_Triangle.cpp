#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    vector<int>v(4,0);
    v[0]=a,v[1]=b,v[2]=c,v[3]=d;
    sort(begin(v),end(v));
    if(v[0]+v[1]>v[2] || v[1]+v[2]>v[3]){
        cout<<"TRIANGLE";
    }else if(v[0]+v[1]==v[2] || v[1]+v[2]==v[3]){
        cout<<"SEGMENT";
    }else{
        cout<<"IMPOSSIBLE";
    }
     
    return 0;
}