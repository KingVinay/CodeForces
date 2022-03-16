#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,a;
  cin>>n;
  int check[1000000];
  for(int i=1;i<=n;i++){
    cin>>a;
    check[a]=i;
  }
  int m,b;
  cin>>m;
  long long v=0,p=0;
  for(int i=0;i<m;i++){
    cin>>b;
    v+=check[b];
    p+=n-check[b]+1;
  }
  cout<<v<<" "<<p<<endl;
  return 0;
}