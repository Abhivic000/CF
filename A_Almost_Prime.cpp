#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    if (n <= 1)
        return false;
    for (int i = 2; i*i<=n; i++)
        if (n % i == 0)
            return false;
 
    return true;
}
int main(){

    int n;
    cin>>n;
    int res=0;
    for(int i=1; i<=n; i++){
        int cnt=0;
        for(int j=2; j<=i; j++){
           if(i%j==0 && isPrime(j)){
            cnt++;
           }
        }
        if(cnt==2){
            res++;
        }
    }
    cout<<res<<endl;
     
    return 0;
}