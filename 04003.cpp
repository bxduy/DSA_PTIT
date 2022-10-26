#include<bits/stdc++.h>
using namespace std;
int mod = 123456789;
long long powmod(long long n, long long k){
	if(k == 0) return 1;
	if(k == 1) return n % mod;
	long long x = powmod(n, k/2);
	if(k%2) return x * x  % mod * n % mod;
	return x * x % mod;
}
void solve(){
	long long n; cin >> n;
	cout << powmod(2, n-1) << endl;
}
main(){
	int t; cin >> t;
	while(t--){
		solve();
	}
}
