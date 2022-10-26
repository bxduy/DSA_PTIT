#include<bits/stdc++.h>
using namespace std;
long long powmod(long long n, long long k){
	if(k == 1) return 1;
	if(k == pow(2, n)) return n+1;
	if(k < pow(2, n)) return powmod(n-1, k);
	return powmod(n-1, k - pow(2, n));
}
void solve(){
	long long n, k;
	cin >> n >> k;
	cout << powmod(n-1, k) << endl;
}
main(){
	int t; cin >> t;
	while(t--){
		solve() ;
	}
}
