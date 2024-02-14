#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int t;
    cin>>t;

    while (t--){
       int n;
		cin >> n;
		vector<int> a(n);
		for (auto &it : a) cin >> it;
		vector<pair<int, int>> ans;
		int ind = -1;
		for (int i = 1; i < n; ++i) {
			if (a[i] != a[0]) {
				ind = i;
				ans.push_back({1, i + 1});
			}
		}
		if (ind == -1) {
			cout << "NO" << endl;
			continue;
		}
		for (int i = 1; i < n; ++i) {
			if (a[i] == a[0]) {
				ans.push_back({ind + 1, i + 1});
			}
		}
		cout << "YES" << endl;
		for (auto [x,y]: ans){
             cout << x << " " << y << endl;
        }
    }
     
    return 0;
}