#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n; cin >> n;
	int a[n];
	for(int &x : a) cin >> x;
	sort(a, a+n);
	int m = a[1] - a[0];
	for(int i = 2; i < n; i++){
		int x = a[i] - a[i-1];
		m = min(m, x);
	}
	cout << m << endl;
}
main(){
	int t; cin >> t;
	while(t--){
		solve();
	}
}
