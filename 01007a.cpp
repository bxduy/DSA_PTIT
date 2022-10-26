#include<bits/stdc++.h>
using namespace std;
int n, m, s;
vector<pair<int, int>> adj;
vector<int> a[1005];
bool check[1005];
void bfs(int u){
	check[u] = true;
	queue<int> q;
	q.push(u);
	while(!q.empty()){
		int s = q.front(); q.pop();
		for(int t : a[s]){
			if(!check[t]){
				check[t] = true;
				q.push(t);
				adj.push_back({s, t});
			}
		}
	}
}
void inp(){
	cin >> n >> m >> s;
	memset(check, false, sizeof(check));
	memset(a, 0, sizeof(a));
	adj.clear();
	for(int i = 0; i < m; i++){
		int x, y; cin >> x >> y;
		a[x].push_back(y);
		a[y].push_back(x);
	}
	bfs(s);
	if(adj.size() != n-1){
		cout << -1 << endl;
		return;
	}
	for(auto x : adj){
		cout << x.first << " " << x.second << endl;
	}
}
main(){
	int t; cin >> t;
	while(t--){
		inp();
	}
}
