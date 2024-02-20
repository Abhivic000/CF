#include <bits/stdc++.h>
using namespace std;
#define ll long long int
 
int main(){
    ll v[200001] = {0};
    ll sum =0 ;
    for (ll i = 0; i <= 2e5; i++){
        ll val1 = 0;
        ll value2 = i;
        while (value2 != 0)
        {
            val1 += value2%10;
            value2 /= 10;
        }
        sum += val1;
        v[i] = sum;
        
    }
    
    ll t;
    cin >> t;
 
    while (t--){
        ll n;
        cin >> n;
        cout << v[n] << endl;
    }
    
}