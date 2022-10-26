#include<bits/stdc++.h>
using namespace std;
int a[1005][1005], check[1005], v, e, cycle;
void dfs(int u){
	check[u] = 1;
	for(int i = 1;i <= v; i++){
		if(a[u][i] == 1){
			if(check[i] == 0) dfs(i);
			else if(check[i] == 1 ) cycle = 1;
		}
	}
	check[u] = 2;
}
void solve(){
	cin >> v >> e;
	memset(a, 0, sizeof(a)); memset(check, 0, sizeof(check));
	cycle = 0;
	for(int i = 0; i < e; i++){
		int x, y; cin >> x >> y;
		a[x][y]  = 1;
	}
	for(int i = 1; i <= v; i++){
		if(check[i] == 0) dfs(i);
	}
	if(cycle == 1) cout << "YES" << endl;
	else cout << "NO" << endl;
}
main(){
	int t; cin >> t;
	while(t--){
	solve();}
}
