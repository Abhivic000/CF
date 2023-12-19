#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int a,b,c;
    cin>>a>>b>>c;

    int maxi = max(a,max(b,c));

    int mini = min(a,min(b,c));

    int mid = a+b+c-(maxi+mini);

    cout<<mini<<endl;
    cout<<mid<<endl;
    cout<<maxi<<endl;
    cout<<endl;
    cout<<maxi<<endl;
    cout<<mini<<endl;
    cout<<mid<<endl;

     
    return 0;
}