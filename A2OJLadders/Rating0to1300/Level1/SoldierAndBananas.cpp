#include<bits/stdc++.h>
using namespace std;
 
int main() {
	int i, n, t, k, w;
	long long sum=0;
 
	cin>> k>>n>>w;
	for(i=1; i<=w; i++){
		sum = sum+(i*k);
	}
	if(sum<= n){
		cout << 0 << endl;
	}
	else {cout << sum - n << endl;}
 
	return 0;
}