#include<bits/stdc++.h>
using namespace std;
int main()
{
  int a[5][5];
  int m=0,n=0,count=0;
  for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
      cin>>a[i][j];
      if(a[i][j]==1){
        m=i;
        n=j;
      }
    }
  }
  count = abs(m-2)+abs(n-2);
  cout<<count<<endl;
  return 0;
}