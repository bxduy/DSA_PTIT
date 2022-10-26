#include<bits/stdc++.h>
using namespace std;
int n, m;
int a[1005][1005];
bool v[1005];
int slt = 0;
void inp(){
	cin >> n >> m;
	memset(a, 0, sizeof(a));
	//for(int i = 1; i <= n; i++) a[i].clear();
	for(int i = 0; i < m; i++){
		int x, y; cin >> x >> y;
		a[x][y] = a[y][x] = 1;
	}
	
}
void Reinit(){
	memset(v, true, sizeof(v));
}
void dfs(int u){
	//cout << u << " ";
	v[u]  = false;
	for(int i = 1; i <= n; i++){
		if(a[u][i] && v[i]) dfs(i);
	}
}
bool check(){
	for(int i = 1; i <= n; i++){
		if(v[i]) return true;
	}
	return false;
}
main(){
	int t; cin >> t;
	while(t--){
		inp();
		Reinit();
		for(int i = 1; i < n; i++){
			for(int j = i+1; j <= n; j++){
				if(a[i][j]){
					a[i][j] = a[j][i] = 0;
					dfs(1);
					if(check()) cout << i << " " << j << " ";
					a[i][j] = a[j][i] = 1;
					Reinit();
				}
			}
		}
		cout << endl;
	}
}
