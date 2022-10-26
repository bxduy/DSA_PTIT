#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n, i; cin >> n; int a[n], s = 0;
	for(i = 0; i < n; i++){
		cin >> a[i];
		s += a[i];
	}
	int s1 = a[0], s2 = a[n-1];
	for(i = 1; i < n; i++){
		if(((s - a[i]) % 2 == 0) && (s1 * 2 == s - a[i])){
			cout << i + 1 << endl;
			return;
		} s1 += a[i];
	}
	cout << "-1" << endl;
}
main(){
	int t; cin >> t;
	while(t--){
		solve();
	}
}
