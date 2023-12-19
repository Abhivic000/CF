#include<bits/stdc++.h>

using namespace std;

int main(){

    string s1,s2;
    cin>>s1;
    cin>>s2;

    int m = s2.compare(s1);

    if(m>0) cout<<s1<<endl;
    else if(m==0) cout<<s1<<endl;
    else cout<<s2<<endl;
}