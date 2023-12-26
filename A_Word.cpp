#include<bits/stdc++.h>
using namespace std;

int main(){
    
   string s;
   cin>>s;
   int cnt=0;
   for(int i=0; i<s.size();i++){
    if(isupper(s[i])){
        cnt++;
    }
   }
   int cntl = s.size()-cnt;
   if(cnt>cntl){
    transform(s.begin(),s.end(),s.begin(),::toupper);
   }
   else{
     transform(s.begin(),s.end(),s.begin(),::tolower);
   }

   cout<<s;
     
    return 0;
}