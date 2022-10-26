#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n; cin >> n; int a[n];
	int l = INT_MAX, r = INT_MIN;
	for(int i = 0; i < n; i++){
		int x; cin >> x;
		l = min(x, l);
		r = max(r, x);
		a[x] = 1;
	}
	int cnt = 0;
	for(int x : a) if(x == 0) cnt++;
	cout << cnt << endl;
}
main(){
	int t; cin >> t;
	while(t--){
		solve();
	}
}
