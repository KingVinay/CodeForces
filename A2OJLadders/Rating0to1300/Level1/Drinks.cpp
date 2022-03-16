#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,j;
  float sum=0;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>j;
    sum+=j;
  }
  cout<<fixed<<setprecision(12)<<sum/n<<endl;
  return 0;

}