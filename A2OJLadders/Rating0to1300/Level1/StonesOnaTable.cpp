#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  string s;
  cin>>s;
  int i=0,j=1,count=0;
  while(j<n){
    if(s[j]!=s[i]){
      i=j;
      j++;
    }
    if(s[j]==s[i]){
      count++;
      j++;
    }
  }
  cout<<count<<endl;

}