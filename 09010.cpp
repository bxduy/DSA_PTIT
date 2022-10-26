#include<bits/stdc++.h>
using namespace std;
vector<int> v[1005];
int V, E, check[1005];
void dfs(int u){
	check[u] = 1;
	for(int i = 0; i < v[u].size(); i++){
		int s = v[u][i];
		if(check[s] == 0) dfs(s);
	}
}
void solve(){
	cin >> V >> E;
	memset(check, 0 , sizeof(check));
	memset(v, 0, sizeof(v));
	for(int i = 1; i <= E; i++){
		int x, y; cin >> x >> y;
		v[x].push_back(y);
	}
	for(int i = 1; i <= V; i++){
		dfs(i);
		for(int j = 1; j <= V; j++){
			if(check[j] == 0){
				cout << "NO" << endl;
				return;
			}
		}
	}
	cout << "YES" << endl;
}
main(){
	int t; cin >> t;
	while(t--){
		solve();
	}
}
