#include<bits/stdc++.h>
using namespace std;
vector<int> v[1005];
int V, E, check[1005];
void dfs(int u){
	check[u] = 1;
	for(int i = 0; i < v[u].size(); i++){
		if(check[v[u][i]] == 0) dfs(v[u][i]);
	}
}
void solve(){
	cin >> V >> E;
	memset(v, 0, sizeof(v));
	memset(check, 0, sizeof(check));
	for(int i = 1; i <= E; i++){
		int x, y; cin >> x >> y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	int ans = 0;
	for(int i = 1; i <= V; i++){
		if(check[i] == 0){
			dfs(i); ans++;
		}
	}
	cout << ans << endl;
}
main(){
	int t; cin >> t;
	while(t--){
		solve();
	}
}
