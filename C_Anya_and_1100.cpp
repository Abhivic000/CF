#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

typedef vector<int> vi;
typedef pair<int,int> pi;

#define fr     first
#define sc     second
#define pb     push_back
#define pob    pop_back
#define pf     push_front
#define pof    pop_front

#define rep(i,a,b) for (int i = a; i <= b; i++)
// for (int i = 1; i <= n; i++) { }
//rep(i,1,n) { }

template<typename T, typename T1>T amax(T &a, T1 b) {if (b > a)a = b; return a;}
template<typename T, typename T1>T amin(T &a, T1 b) {if (b < a)a = b; return a;}

bool checkk(string& s,int i){
    return i>=0 && i+3<s.size() && s.substr(i,4)=="1100";
}

void solve() {
    string s;
    cin>>s;
    ll q;
    cin>>q;
    set<int>st;
    for(int i=0; i+3<s.size(); i++){
        if(checkk(s,i)){
            st.insert(i);
        }
    }
    while(q--){
        int i,v;
        cin>>i>>v;
        --i;
        for(int j=max(0,i-3); j<=min(i,(int)s.size()-4); j++){
            if(checkk(s,j)){
                st.erase(j);
            }
        }
        s[i] = (v==1 ? '1':'0');
        for(int j=max(0,i-3); j<=min(i,(int)s.size()-4); j++){
            if(checkk(s,j)){
                st.insert(j);
            }
        }
        if(!st.empty()){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
    
}