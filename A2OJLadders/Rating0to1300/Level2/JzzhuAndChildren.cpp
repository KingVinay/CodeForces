// Solution 1 (Brute Force)

#include<iostream>
using namespace std;
int main()
{
  int n,m;
  cin>>n>>m;
  int a[101];
  for(int i=1;i<=n;i++){
    cin>>a[i];
  }
  int i=1,ls=0;
  while(i>0){
    for(int j=1;j<=n;j++){
      if(a[j]>0){
        a[j]-=m;
        ls = j;
        if(a[j]>0){
          if(i==1){
          i++;}
        }
      }
    }
    i--;

  }

  cout<<ls<<endl;
  return 0;

}

// Solution 2 (Math Optimised Opproach)

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n, m, last;
    double t, max(0);
    cin >> n >> m;

    for (int i = 1; i <= n; i++)
    {
        cin >> t;
        if (ceil(t / m) >= max)
        {
            last = i;
            max = ceil(t / m);
        }
    }

    cout << last << endl;
    return 0;
}