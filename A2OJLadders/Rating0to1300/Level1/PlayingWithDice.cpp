#include<bits/stdc++.h>
using namespace std;
int main()
{
  int a,b;
  cin>>a>>b;
  int ac=0,ec=0,bc=0;
  for(int i=1;i<=6;i++){
    if(abs(a-i)<abs(b-i)){
        ac++;
    }
    else if(abs(a-i)>abs(b-i)){
      bc++;
    }
    else{ec++;}
  }
  cout<<ac<<" "<<ec<<" "<<bc<<endl;
  return 0;

}