#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n; cin >> n;
	vector<int> a, b;
	for(int i = 0; i < n; i++){
		int x; cin >> x;
		if(i % 2)a.push_back(x);
		else b.push_back(x);
	}
	sort(b.begin(), b.end());
	sort(a.begin(), a.end(), greater<int>());
	int i = 0, j = 0;
	for(int k = 0; k < n; k++){
		if(k % 2) cout << a[i++] << " ";
		else cout << b[j++] << " ";
	}
}
main(){
	solve();
}
