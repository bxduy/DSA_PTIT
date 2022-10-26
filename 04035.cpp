#include<bits/stdc++.h>
using namespace std;
int mod = 1e9+7;
long long powmod(long long n, long long k){
	if(k == 0) return 1;
	if(k == 1) return n;
	long long x = powmod(n, k/2);
	if(k % 2) return x * x %mod * n % mod;
	return x * x % mod;
}
main(){
	long long a, b;
	while(true){
		cin >> a >> b;
		if(a == b && b == 0) break;
		cout << powmod(a, b) << endl;
	}
}
