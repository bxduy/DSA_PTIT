#include<bits/stdc++.h>
using namespace std;
int m = 1e9+7;
void solve(){
	int n; cin >> n; int a[n];
	for(int &x : a) cin >> x;
	sort(a, a+n);
	for(int i = 0; i < n; i++){
		a[i] = ((a[i] %m) * (i % m)) % m ;
	}
	int s = 0;
	for(int i = 0; i < n; i++){
		s = (s%m + a[i] % m) %m;
	}
	cout << s << endl;
}
main(){
	int t; cin >> t;
	while(t--){
		solve();
	}
}
