#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int t;
    cin>>t;

    while (t--){
       int n;
       cin>>n;
       vector<int>v(n);
       for(int i=0; i<n; i++){
        cin>>v[i];
       }
       if(is_sorted(v.begin(),v.end())){
 
        int mini=INT_MAX;
		  for(int i=1;i<n;i++){
 
			 mini=min(mini,v[i]-v[i-1]);
		  }
		  cout<<(mini/2)+1<<endl;
 
	       }
	    else{
		cout<<0<<"\n";
	}
    }
     
    return 0;
}