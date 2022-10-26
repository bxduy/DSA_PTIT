#include<bits/stdc++.h>
using namespace std;
int mod = 1e9+7;
long long powmod(int a, int n){
	if(n == 0) return 1;
	long long x = powmod(a, n/2);
	if(n%2) return x * x * a;
	return x * x;
}
main(){
	int t; cin >> t;
	while(t--){
		int n, k; cin >> n >> k;
		cout << powmod(n , k) << endl;
	}
}
