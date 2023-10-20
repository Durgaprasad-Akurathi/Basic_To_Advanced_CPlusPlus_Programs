#include<bits/stdc++.h>
using namespace std;
int main() 
{
  int n;
  cin>>n;
  for(int i=1; i<=n; i++) 
  {
    int value=0;
    string K=to_string(i);
    int P=K.length();
    for(int j=0; j<P; j++) 
      value+=pow(static_cast<double>(K[j]-'0'), P);
    if(value==i) 
      cout<<i<<endl;
  }
}
