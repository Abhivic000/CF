#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n,m,b;
    cin>>n>>m;
    int cnt =0;
    
    for(int a=0; a<=sqrt(n);a++){
        b=n-a*a;
        if((a+(b*b))==m){
            cnt++;
        }
    }

      cout<<cnt;
    return 0;
}