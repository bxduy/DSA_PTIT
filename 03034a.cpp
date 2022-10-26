#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n, m, k; cin >> n >> m >> k;
	int a[n], b[m], c[k];
	for(int &x : a) cin >> x;
	for(int &x : b) cin >> x;
	for(int &x : c) cin >> x;
	multiset<int> s1, s2, s3;
	for(int x : a) s1.insert(x);
	for(int x : b){
		if(s1.find(x) != s1.end()) s2.insert(x);
	}
	for(int x : c) if(s2.find(x) != s2.end()) s3.insert(x);
	if(s3.size() == 0) cout << "NO" << endl;
	else
	for(int x : s3) cout << x << " ";
	cout << endl;
}
main(){
	int t; cin >> t;
	while(t--){
		solve();
	}
}
