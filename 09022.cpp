#include<bits/stdc++.h>
using namespace std;
int n, m, u;
vector<int> a[1005];
bool v[1005];
void inp(){
	cin >> n >> m >> u;
	for(int i = 1; i <= n; i++) a[i].clear();
	for(int i = 0; i < m; i++){
		int x, y;
		cin >> x >> y;
		a[x].push_back(y);
		//a[y].push_back(x);
	}
	memset(v, false, sizeof(v));
}
void dfs(int u){
	cout << u << " ";
	v[u]  =true;
	for(int x : a[u]){
		if(!v[x]) dfs(x);
	}
}
main(){
	int t; cin >> t;
	while(t--){
		inp();
		dfs(u);
		cout << endl;
	}
}
