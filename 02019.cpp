#include<bits/stdc++.h>
using namespace std;
int a[25][25], ans, n, m;
void dfs(int u, int cnt){
	ans = max(ans, cnt);
	for(int v = 0; v < n; v++){
		if(a[u][v] == 1){
			a[u][v] = a[v][u] = 0;
			dfs(v, cnt+1);
			a[u][v] = a[v][u] = 1;
		}
	}
}
void inp(){
	cin >> n >> m;
	memset(a, 0, sizeof(a));
	ans = INT_MIN;
	for(int i = 0; i < m; i++){
		int x, y; cin >> x >> y;
		a[x][y] = a[y][x] = 1;
	}
	for(int i = 0; i < n; i++) dfs(i, 0);
	cout << ans << endl;
}
main(){
	int t; cin >> t;
	while(t--){
		inp();
	}
}
