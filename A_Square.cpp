#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int t;
    cin>>t;

    while (t--){
       int x1,y1,x2,y2,x3,y3,x4,y4;
       cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
       
       int side = max(abs(x2 - x1), std::abs(y2 - y1));
       int area = side*side;
       cout<<area<<endl;
    }
     
    return 0;
}