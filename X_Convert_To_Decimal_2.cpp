#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int t;
    cin>>t;

    while (t--){
       int n;
       cin>>n;
       int cnt =0;
       int num=0;
       int j=0;

       int bn = 0, i=1;
       int rem ;
       while(n!=0){
        rem = n%2;
        n /=2;
        bn = bn + rem*i;
        i = i* 10;
        if(rem==1) cnt +=1;
       }
       while(cnt--){
        int p = pow(2,j);
        num += p;
         j++;
       }
       cout<<num<<endl;
    }
     
    return 0;
}