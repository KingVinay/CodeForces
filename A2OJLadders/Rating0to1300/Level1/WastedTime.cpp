#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,k;
  cin>>n>>k;
  int x1,y1,x2,y2;
  cin>>x1>>y1;
  double dist=0;
  for(int i=1;i<n;i++){
    cin>>x2>>y2;
    int x = (x1-x2);
    int y = (y1-y2);
    dist+= sqrt(pow(x,2)+pow(y,2));
    x1 = x2;
    y1 = y2;
  }
  cout<<fixed<<setprecision(9)<<(dist * k) / 50<<endl ;
}