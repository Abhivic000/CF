#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll n,m,p;

bool good(ll y){
    return (y/n)*(y/m)>=p;
}

int main(){   
    cin>>n>>m>>p;
    ll l=0,r=1;
    while(!good(r)) r*=2;
    while(r>l+1){
        long long y=(l+r)/2;
        if(good(y)){
          r=y;
        }else{
            l=y;
        }
    }
   cout<<r<<endl;  
    return 0;
}