#include<bits/stdc++.h>
using namespace std;
vector<int> a[1005];
int s, t, V, E, check[1005], b[1005];
void dfs(int u){
	check[u] = 1;
	for(int i = 0; i < a[u].size(); i++){
		int v = a[u][i];
		if(check[v] == 0){
			b[v] = u;
			dfs(v);
		}
	}
}
void solve(){
	cin >> V >> E >> s >> t;
	memset(a, 0, sizeof(a));
	memset(check, 0, sizeof(check));
	for(int i = 1; i <= E; i++){
		int x, y; cin >> x >> y;
		a[x].push_back(y);
	}
	dfs(s);
	if(check[t] == 0) cout << -1 << endl;
	else{
		vector<int> res;
		int i = t; cout << s << " ";
		while(i != s){
			res.push_back(i); i = b[i];
		}
		for(int i = res.size() - 1; i >= 0; i--) cout << res[i] << " ";
		cout << endl;
	}
}
main(){
	int t; cin >> t;
	while(t--){
		solve();
	}
}

