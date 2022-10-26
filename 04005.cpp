#include<bits/stdc++.h>
using namespace std;
long long f[93];
char fibo(long long n, long long i){
	if(n == 1) return 'A';
	if(n == 2) return 'B';
	if(i <= f[n-2]) return fibo(n-2, i);
	else return fibo(n-1, i-f[n-2]);
}
void solve(){
	long long n, i;
	cin >> n >> i;
	cout << fibo(n, i) << endl;
}
main(){
	int t; cin >> t;
	f[1] = 1, f[2] = 1;
	for(int i = 3; i <=93; i++) f[i] = f[i-1] + f[i-2];
	while(t--){
		solve();
	}
}
