#include<bits/stdc++.h>
using namespace std;


int main(){
    
    int t;
    cin>>t;

    while (t--){
       int n;
       cin>>n;

       int sum=0;
       int temp =n;
       while(temp>0){
        int rem = temp%10;
        rem += sum;
        temp /= 10;
       }
       
    }
     
    return 0;
}