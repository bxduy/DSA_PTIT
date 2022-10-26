#include<bits/stdc++.h>
using namespace std;
int n, m, c = 0;
bool check[1005];
int a[1005][1005];
void dfs(int u, int par){
	check[u] = true;
	for(int v = 1; v <= n; v++){
		if(a[u][v] == 1){
			if(check[v] == false) dfs(v, u);
			else if(check[v] == true && v != par) c = 1;
		}
	}
}
void solve(){
	cin >> n;
	m = n-1;
	memset(a, 0, sizeof(a));
	for(int i = 1; i <= m; i++){
		int x, y; cin >> x >> y;
		a[x][y] =1; a[y][x] = 1;
	}
	
	memset(check, false, sizeof(check));
	c = 0;
	dfs(1, 0);
	
	for(int i = 1; i <= n; i++) if(check[i] == false) c= 1;
	if(c == 1) cout << "NO" << endl;
	else cout << "YES" << endl;
}
main(){
	int t; cin >> t;
	while(t--){
		solve();
	}
}
