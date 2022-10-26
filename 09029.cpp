#include<bits/stdc++.h>
using namespace std;
int n, m;
vector<int> adj[1005];
bool check[1005];
bool dfs(int i, int cnt){
	if(cnt == n) return true;
	check[i] = true;
	for(int v : adj[i]){
		if(!check[v] && dfs(v, cnt+1)) return true;
	}
	check[i] = false;
	return false;
}
void sovle(){
	cin >> n >> m;
	for(int i = 1; i <= n; i++)adj[i].clear();
	for(int i = 0; i < m; i++){
		int x, y; cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	memset(check, false, sizeof(check));
	int ok = 1;
	for(int i = 1; i <= n; i++){
		if(dfs(i, 1)){
			ok = 0; break;
		}
	}
	if(ok) cout << 0 << endl;
	else cout << 1 << endl;
}
main(){
	int t; cin >> t;
	while(t--){
		sovle();
	}
}

