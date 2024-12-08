#include <bits/stdc++.h>
#include <immintrin.h>
#include <numeric>
#pragma GCC Optimize("O3")
#pragma GCC target( "sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native,avx2" )
#pragma GCC optimize("unroll-loops")
#define int long long //!!!
#define sizearr(arr) (sizeof(arr) / sizeof(arr[0]))
#define write_arr(arr) for(int i = 0; i < sizearr(arr); i++) cout << arr[i] << " ";
#define vi vector<int>
#define pii pair<int, int>
#define read(v,n) for(int i=0;i<n;i++)cin>>v[i];
#define write_v(v) for(int i=0; i<v.size(); i++)cout<<v[i]<<" ";
#define pb push_back
#define all(v) (v).begin(), (v).end()
#define allr(v) (v).rbegin(), (v).rend()
#define yes printf("YES")
#define no printf("NO")
#define even(x) ((x) % 2 == 0)
#define odd(x) ((x) % 2 != 0)
#define IOS ios_base::sync_with_stdio(NULL); cin.tie(0); cout.tie(0);
#define tw int t; cin>>t; while(t--)
#define f first
#define s second
#define clean(arr) (memset(arr,0,sizeof(arr)))
#define ok exit(0);
#define intt __int128
using namespace std;
int32_t main(){
    IOS
    tw{
        int n;
        cin>>n;
        int sum=0;
        bool flag=true;
        int a[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        if(n%2==0){
            for(int i=0; i<n/2-1; i++){
                if(a[i]>a[i+1]){
                    flag=false;
                    break;
                }
                if(a[n-1-i]>a[n-2-i]){
                    flag=false;
                    break;
                }
            }
        }
        else{
            for(int i=0; i<n/2; i++){
                if(a[i]<a[i+1]){
                    flag=false;
                    break;
                }
                if(a[n-1-i]>a[n-2-i]){
                    flag=false;
                    break;
                }
            }
        }
        if(flag){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
        cout<<'\n';
    }
}