#include<bits/stdc++.h>
using namespace std;

int main(){
    
    double n,m;
    cin>>n>>m;

    //dis = 100(og - dpr) / og 
    //og = 100or - 100dpr/ dis
    // 100og/dis - og = 100dpr
     // og(100/dis -1) = 100dpr
     // og = 100dpr/(100/dis -1)

     double og = ((100*m)/n) / ((100/n) -1);

     cout<<fixed<<setprecision(2)<<og;

    return 0;
}