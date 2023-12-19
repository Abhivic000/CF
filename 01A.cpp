#include<iostream>
using namespace std;

int main(){
    
   int t;
   cin>>t;

   while(t--){
    int a,b,c;
    int mve=0;
    cin>>a>>b>>c;
   
    int mx = max(a,b);
    int mn = min(a,b);

    if(a==b){
        cout<<mve;
    }
    else{
        mx = mx - mn;
        
    }

   }



    return 0;
}