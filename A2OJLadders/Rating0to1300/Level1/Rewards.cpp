#include<bits/stdc++.h>
using namespace std;
int main()
{
  int a1,a2,a3,b1,b2,b3;
  cin>>a1>>a2>>a3>>b1>>b2>>b3;
  int n;
  cin>>n;
  int suma=a1+a2+a3;
  int sumb=b1+b2+b3;
  while(suma>0 || sumb>0){
    if(suma>0){
      n--;
      suma-=5;
      if(n==0){break;}
    }
    if(sumb>0){
      n--;
      sumb-=10;
      if(n==0){break;}
    }
  }
  if(suma>0 || sumb>0){
    cout<<"NO"<<endl;
  }
  else{
    cout<<"YES"<<endl;
  }
  return 0;
}