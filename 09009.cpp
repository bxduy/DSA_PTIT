#include<bits/stdc++.h>
using namespace std;
vector<int> v[1005];
int V, E, check[1005];
void bfs(int u){
	check[u] = 1;
	queue<int> q;
	q.push(u);
	while(!q.empty()){
		int s = q.front();
		q.pop();
		for(int i = 0; i < v[s].size(); i++){
			int t = v[s][i];
			if(check[t] == 0){
				check[t] = 1;
				q.push(t);
			}
		}
		
	}
}
void solve(){
	cin >> V >> E;
	memset(check, 0, sizeof(check));
	memset(v, 0 , sizeof(v));
	for(int i = 1; i <= E; i++){
		int x, y; cin >> x >> y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	int cnt = 0;
	for(int i = 1; i <= V; i++){
		if(check[i] == 0){
			bfs(i); cnt++;
		}
	}
	cout << cnt << endl;
}
main(){
	int t; cin >> t;
	while(t--){
		solve();
	}
}
