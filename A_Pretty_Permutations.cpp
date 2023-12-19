#include<bits/stdc++.h>
using namespace std;
 
 
int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		int i=1;
		if(n&1){
			cout<<"2 3 1 ";
			i=4;
		} 
		for(;i<=n;i+=2){
			cout<<i+1<<" "<<i<<" ";
		}
		cout<<endl;
	}
}