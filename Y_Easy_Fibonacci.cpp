#include<bits/stdc++.h>
using namespace std;

int fib(int t){
   
     if (t <= 1)
     return t;
     return fib(t-1) + fib(t-2);

}

int main(){
    
    int t;
    cin>>t;
   
    cout<<fib(t);
    
    return 0;
}