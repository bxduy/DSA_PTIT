#include<bits/stdc++.h>
using namespace std;
vector<pair<int, int>> adj;
vector<int> vt[1005];
int n, m, s;
bool check[1005];
void inp(){
	cin >> n >> m >> s;
	memset(check, false, sizeof(check));
	memset(vt, 0, sizeof(vt));
	adj.clear();
	for(int i = 0; i < m; i++){
		int x, y;
		cin >> x >> y;
		vt[x].push_back(y);
		vt[y].push_back(x);
	}
}
void dfs(int u){
	check[u] = true;
	for(int v : vt[u]){
		if(!check[v]){
			adj.push_back({u, v});
			dfs(v);
		}
	}
}
void solve(){
	dfs(s);
	if(adj.size() != n-1){
		cout << -1 << endl;
		return;
	}
	for(auto x : adj) cout << x.first << " " << x.second << endl;
}
main(){
	int t; cin >> t;
	while(t--){
		inp();
		solve();
	}
}
