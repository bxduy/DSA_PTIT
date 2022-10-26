#include<bits/stdc++.h>
using namespace std;
int mod = 1e9+7;
long long powmod(long long n, long long k){
	if(k == 0) return 1;
	if(k == 1) return n % mod;
	long long tmp = powmod(n, k/2);
	if(k%2 == 0) return tmp*tmp %mod;
	return tmp * tmp %mod * n % mod;
}
void solve(){
	string s; cin >> s;
	string tmp = s;
	reverse(tmp.begin(), tmp.end());
	long long n = stoll(s), m = stoll(tmp);
	cout << powmod(n, m) << endl;
}
main(){
	int t; cin >> t;
	while(t--){
		solve();
	}
}
