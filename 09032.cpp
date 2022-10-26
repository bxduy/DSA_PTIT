#include<bits/stdc++.h>
using namespace std;
int n, m, cnt;
bool check[100005];
vector<int> adj[100005];
void dfs(int u){
	check[u] = true;
	cnt++;
	for(int v : adj[u]){
		if(!check[v]) dfs(v);
	}
}
void inp(){
	cin >> n >> m;
	memset(adj, 0, sizeof(adj));
	memset(check, false, sizeof(check));
	
	for(int i = 0; i < m; i++){
		int x, y; cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	int  res = 0, ans = INT_MIN;
	for(int i = 1; i <= n; i++){
		 cnt = 0;
		if(!check[i])
		    dfs(i);
		    ans = max(cnt, ans);
		   res += cnt;
		   if(n - res <= ans) break;
			
	}
	cout << ans << endl;
}
main(){
	int t; cin >> t;
	while(t--){
		inp();
	}
}
