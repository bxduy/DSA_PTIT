#include<bits/stdc++.h>
using namespace std;
int v, e, u, U, check[1005];
vector<int> a[1005];
void dfs(int u){
	check[u] = 1;
	for(int i = 0; i < a[u].size(); i++){
		U = a[u][i];
		if(check[U] == 0){
			dfs(U);
		}
	}
}
void solve(){
	cin >> v >> e;
	memset(a, 0, sizeof(a));
	for(int i = 1; i <= e; i++){
		int x, y; cin >> x >> y;
		a[x].push_back(y);
		a[y].push_back(x);
	}
	int q; cin >> q;
	while(q--){
		int s, t;
		cin >> s >> t;
		memset(check, 0, sizeof(check));
		dfs(s);
		if(check[t] == 0) cout << "NO" << endl;
		else cout << "YES" << endl;
	}
}
main(){
	int t; cin >> t;
	while(t--){
		solve();
	}
}
