#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n, k; cin >> n >> k;
	int a[n];
	
	map<int, int> mp;
	for(int &x : a) {
		cin >> x;
		mp[x]++;
	}
	if(mp[k]!=0) cout << mp[k] << endl;
	else cout << -1 << endl;
}
main(){
	int t; cin >> t;
	while(t--){
		solve();
	}
}
