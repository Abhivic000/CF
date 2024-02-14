#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int t;
    cin>>t;

    while (t--){
        int a,b;
        cin>>a>>b;
        b--;
        if(a%2==0){
           cout<<b%a+1<<endl;
        }
        else{
          int x=(a/2);
          cout<<((b+(b/x))%a)+1<<endl;
        }
    }
     
    return 0;
}