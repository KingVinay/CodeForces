#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,m;
  cin>>n>>m;
  vector<int> check(n+1,0);
  int x;
  for(int i=0;i<m;i++){
    cin>>x;
    for(int j=1;j<=n;j++){ //or direct j=x to n
      if(check[j]==0 && j>=x){
        check[j]=x;
      }
    }

  }
  for(int i=1;i<=n;i++){
    cout<<check[i]<<" ";
  }
  cout<<endl;
  return 0;
}