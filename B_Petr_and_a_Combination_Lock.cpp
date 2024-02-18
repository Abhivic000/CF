#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    
    bool flag = 0;
    int m = (1<<n);
    for(int i=0;i<m;i++){
        int sum = 0;
        for(int k = 0;k<n;k++){
            if(i &(1<<k))sum+=v[k];
            else sum-=v[k];
        }
        
        if(sum%360==0){
            flag=1;
            break;
        }
    }
    
    if(flag==1)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
    return 0;
}