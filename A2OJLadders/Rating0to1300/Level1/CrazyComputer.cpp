#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long n,c,x,y;
  cin>>n>>c;
  int count=1;
  cin>>x;
  for(int i=1;i<n;i++){
    cin>>y;
    if(y-x<=c){
      count++;
    }
    else{
      count=1;
    }
    x=y;
  }
  cout<<count<<endl;
  return 0;

}