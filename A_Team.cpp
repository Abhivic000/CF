#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    int cnt = 0;

    while (n--){

       int a,b,c;
       cin>>a>>b>>c;

       if((a==1 && b==1) || (b==1 && c==1) || (c==1 && a==1)){
        cnt += 1;
       }
    }
      cout<<cnt;

    return 0;
}