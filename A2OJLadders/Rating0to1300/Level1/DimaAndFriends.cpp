#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,a,sum=0;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>a;
    sum+=a;
  }
  n+=1;
  cout<<((sum+n)%5)%n<<endl;
  return 0;
}