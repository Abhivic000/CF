#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1e6 + 10;
int n,k;
int a[N];
void solve(){
	int ans = 0;
	cin >> n >> k;
	for(int i = 1 ; i <= n ; i++){
		cin >> a[i];
		if(a[i] % k == 0)ans = 1;
	}
	if(ans){
		cout << 0 << endl;
		return ;
	}
	int mi = 1e9;
	for(int i = 1 ; i <= n ; i++){
		mi = min(mi,k - (a[i] % k));
	}
	if(k != 4){
		cout << mi << endl;
	}
	else{
		int o = 0;
		for(int i = 1 ; i <= n ; i++){
			if(a[i] % 2 == 0)o++;
		}
		if(o >= 2)cout << 0 << endl;
		else cout << min(mi,2 - o) << endl;
	}
}
signed main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
    return 0;
}