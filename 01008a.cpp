#include<bits/stdc++.h>
using namespace std;
int n, m, s;
vector<pair<int, int>> adj[1005];
void inp(){
	cin >> n >> m >> s;
	memset(adj, 0, sizeof(adj));
	for(int i = 0; i < m; i++){
		int x, y, w; cin >> x >> y >> w;
		adj[x].push_back({y, w});
		adj[y].push_back({x, w});
	}
}
int inf = 1e9;
void djt(int s){
	vector<long long> d(n+1, inf);
	d[s] = 0;
	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q;
	q.push({0, s});
	while(!q.empty()){
		pair<int, int> top = q.top(); q.pop();
		int u = top.second, kc = top.first;
		if(kc > d[u]) continue;
		for(auto it : adj[u]){
			int v = it.first;
			int w = it.second;
			if(d[v] > d[u] + w){
				d[v] = d[u] + w;
				q.push({d[v], v});
			}
		}
		
	}
	for(int i = 1; i <= n; i++) cout << d[i] << " ";
		cout << endl;
}
main(){
	int t; cin >> t;
	while(t--){
		inp();
		djt(s);
	}
}
