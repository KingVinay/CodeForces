#include <bits/stdc++.h>
using namespace std;
int main() {
    string a, b = "hello";
    int j = 0, count = 0;
    cin >> a;
    for (int i = 0; i<a.length(); i++) {
        if (a[i] == b[j]) {
            j++;
            count++;
            
            if (count == 5) {
                break;
            }
        }
    }
    if (count == 5) {
        cout << "YES"<<endl;
    } else {
        cout << "NO"<<endl;
    }
}

// In this solution if string comes later on but character from hello comes before it will give wrong ans even though ans is present in string

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//   string s;
//   cin>>s;
//   int n = s.length();
//   string ans;
//   int hc=0,ec=0,lc=0,oc=0;
//   for(int i=0;i<n;i++){
//     if(s[i]=='h' && hc<1){
//       ans+=s[i];
//       hc++;
//     }
//     else if(s[i]=='e' && ec<1){
//       ans+=s[i];
//       ec++;
//     }
//     else if(s[i]=='l' && lc<2){
//       ans+=s[i];
//       lc++;
//     }
//     else if(s[i]=='o' && oc<1){
//       ans+=s[i];
//       oc++;
//     }
//   }
//   if(ans=="hello"){
//     cout<<"YES"<<endl;
//   }

//   else{
//     cout<<"NO"<<endl;
//     }
//   return 0;
// }