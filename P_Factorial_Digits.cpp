#include <bits/stdc++.h>

using namespace std;

int main(){
  int n;
  cin>>n;
  int sum =1;
  int sum2=0;
  for(int i=1; i<=n; i++){
      sum = sum*i;
  }
  int p = sum;
  while(p>0){
    int rem = p%10;
    sum2++;
    p/=10;
  }
  cout<<"Number of digits of "<<n<< "! is "<<sum2<<endl;
}