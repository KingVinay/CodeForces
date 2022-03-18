#include<bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  cin>>s;
  int n = s.length();
  sort(s.begin(),s.end());
  string ans;
  for(int i=n/2;i<n-1;i++){
    ans+=s[i];
    ans+='+';
  }
  ans+=s[n-1];
  cout<<ans<<endl;
}