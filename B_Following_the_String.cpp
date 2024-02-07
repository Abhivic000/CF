#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int t;
    cin>>t;

    while (t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
          cin>>a[i];
        }
        string s1;
 
        vector<int>v(26,0);
        for(int i=0;i<n;i++){
          int j=0;
          while(v[j]>a[i])
            j++;
            s1.push_back('a'+j);
            v[j]++; 
        }
        cout<<s1<<endl;
    }
     
    return 0;
}