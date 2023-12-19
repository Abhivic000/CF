#include<bits/stdc++.h>
using namespace std;

int main(){
    
     int t;
     cin>>t;

     while(t--){
        long long n;
        cin>>n;
        int cn2=0, cn3=0, cn5=0, move=0;

        while (n%2==0){
            n /= 2;
            cn2++;
        }
        while (n%3==0){
            n /= 3;
            cn3++;
        }
        while (n%5==0){
            n /= 5;
            cn5++;
        }

        if(n!=1){
            cout<< -1<<endl;
        }
        else{
            cout<<cn2+cn3*2+cn5*3<<endl;
        }
        
     }

    return 0;
}