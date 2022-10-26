#include<bits/stdc++.h>
using namespace std;
int n, m, k;
int visited[10005], check[10005], cnt = 0;
vector<int> adj[10005];
void dfs(int u){
	visited[u] = true;
	check[u]++;
	for(int v : adj[u]){
		if(!visited[v]) dfs(v);
	}
}
void dfs1(int u){
	visited[u] = true;
	if(check[u] == 1){
		//cout << u << " ";
		check[u];
	}
	for(int v : adj[u]){
		if(!visited[v]) dfs1(v);
	}
}
void inp(){
	cin >> k >> n >> m;
	int a[k];
	for(int &x : a) cin >> x;
	for(int i = 0; i < m; i++){
		int x, y; cin >> x >> y;
		adj[x].push_back(y);
		//adj[y].push_back(x);
	}
	memset(check, 0, sizeof(check));
	memset(visited, false, sizeof(visited));
	//dfs(a[0]);
	for(int i = 0; i < k; i++){
		memset(visited, false, sizeof(visited));
		dfs(a[i]);
	}
	//cout << *max_element(check+1, check+n+1);
	for(int i  =1; i <= n; i++) if(check[i] == k) cnt++;
	cout << cnt;
}
main(){
	inp();
}
