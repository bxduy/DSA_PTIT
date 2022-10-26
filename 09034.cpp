#include<bits/stdc++.h>
using namespace std;
char a[150][150];
bool visited[150][150];
int n, m;
int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
void dfs(int i, int j){
	visited[i][j] = true;
	for(int k = 0; k < 8; k++){
		int i1 = i + dx[k];
		int j1 = j + dy[k];
		if(i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= m && a[i1][j1] == 'W' && !visited[i1][j1]){
			dfs(i1, j1);
		}
	}
}
void inp(){
	cin >> n >> m;
	memset(visited, false, sizeof(visited));
	for(int i = 1; i <= n; i++) for(int j = 1; j <= m; j++) cin >> a[i][j];
	int cnt = 0;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			if(a[i][j] == 'W' && !visited[i][j]){
				dfs(i, j);
				cnt++;
			}
		}
	}
	cout << cnt << endl;
}
main(){
	inp();
}
