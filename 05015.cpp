#include<bits/stdc++.h>
using namespace std;
int mod = 1e9+7, n, k;
void sl(){
	long long res = 1;
	if(k > n){
		cout << 0 << endl;
		return;
	}
	for(int i = n; i >= n-k+1; i--){
		res = (res % mod * i % mod) % mod;
	}cout << res << endl;
}
main(){
	int t; cin >> t;
	while(t--){
		cin >> n >> k;
		sl();
	}}
