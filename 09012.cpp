#include<bits/stdc++.h>
using namespace std;
vector<int> v[1005];
int check[1005], V, E;
void dfs(int u){
	check[u] = 1;
	for(int i = 0; i < v[u].size(); i++){
		int a = v[u][i];
		if(check[a] == 0) dfs(a);
	}
}
void solve(){
	cin >> V >> E;
	memset(check, 0, sizeof(check));
	memset(v, 0, sizeof(v));
	for(int i = 1; i <= E; i++){
		int x, y; cin >> x >> y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	int slt = 0;
	for(int i = 1; i <= V; i++){
		if(check[i] == 0){
			dfs(i);
			slt++;
		}
	}
	for(int i = 1; i <= V; i++){
		memset(check, 0, sizeof(check));
		int ans = 0;
		check[i] = 1;
		for(int j = 1; j <= V; j++){
			if(check[j] == 0){
				dfs(j); ans++;
			}
		}
		if(ans > slt) cout << i << " ";
	}
	cout << endl;
}
main(){
	int t; cin >> t;
	while(t--){
		solve();
	}
}
