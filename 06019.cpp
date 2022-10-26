#include<bits/stdc++.h>
using namespace std;
map<int, int> mp;
bool cmp(int a, int b){
	if(mp[a] != mp[b]){
		return mp[a] > mp[b];
	}
	return a < b;
}
void solve(){
	int n; cin >> n; int a[n];
	for(int &x : a){
		cin >> x;
		mp[x] ++;
	}
	sort(a, a+n, cmp);
	for(int x : a) cout << x << " ";
	cout << endl;
	mp.clear();
}
main(){
	int t; cin >> t;
	while(t--){
		solve();
	}
}
