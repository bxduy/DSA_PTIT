#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n, m, k; cin >> n >> m >> k;
	int a[n], b[m], c[k];
	for(int &x : a) cin >> x;
	for(int &x : b) cin >> x;
	for(int &x : c) cin >> x;
	vector<int> v;
	int i =0, j = 0, l = 0;
	while(i < n && j < m && l < k){
		if(a[i] == b[j] && b[j] == c[l]){
			v.push_back(a[i]);
			i++; j++; l++;
		}
		else if(a[i] <= b[j] && a[i] <= c[l]) i++;
		else if(b[j] <= a[i] && b[j] <= c[l]) j++;
		else l++;
	}
	if(v.size() == 0) cout << "NO" << endl;
	else
	for(int x : v) cout << x << " ";
	cout << endl;
}
main(){
	int t; cin >> t;
	while(t--){
		solve();
	}
}
