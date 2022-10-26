#include<bits/stdc++.h>
using namespace std;
int n, m;
vector<int> adj[100001], radj[100001];
bool check[100001];
stack<int> st;

void dfs1(int u){
	check[u] = true;
	for(int v : adj[u]){
		if(!check[v]) dfs1(v);
	}
	st.push(u);
}
void dfs2(int u){
	check[u] = true;
	for(int v : adj[u]){
		if(!check[v]) dfs2(v);
	}
}
void inp(){
	memset(adj, 0, sizeof(adj));
	cin >> n >> m;
	for(int i = 0; i < m; i++){
		int x, y;
		cin >> x >> y;
		adj[x].push_back(y);
		//radj[y].push_back(x);
	}
}
void scc(){
	memset(check, false, sizeof(check));
	for(int i = 1; i <=n; i++){
		dfs2(i);
		for(int j = 1; j <= n; j++){
			if(!check[j]){
				cout << "NO" <<endl;
				return;
			}
		}
	}
	cout << "YES" << endl;
}
main(){
	int t; cin >> t;
	while(t--){
		inp();
		scc();
	}
}
