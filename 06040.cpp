#include<bits/stdc++.h>
using namespace std;
void solve(){
	long long n, m, k; cin >> n >> m >> k;
	long long a[n], b[m], c[k];
	vector<long long> v;
	for(long long &x : a) cin >> x;
	for(long long &x : b) cin >> x;
	for(long long &x : c) cin >> x;
	int i =0, j = 0, l = 0;
	while(i < n && j < m && l < k){
		if(a[i] == b[j] && b[j] == c[l]){
			v.push_back(a[i]);
			i++; j++; l++;
		}else if(a[i] <= b[j] && a[i] <= c[l]) i++;
		else if(b[j] <= a[i] && b[j] <= c[l]) j++;
		else l++;
	}
	if(v.size()==0) cout << -1 << endl;
	else for(long long x : v) cout << x << " ";
	cout << endl;
}
main(){
	int t; cin >> t;
	while(t--){
		solve();
	}
}
