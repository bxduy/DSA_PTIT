#include<bits/stdc++.h>
using namespace std;
int n, m, c[1005];
vector<int> ke[1005];
void inp(){
	cin >> n >> m;
	memset(ke, 0, sizeof(ke));
	for(int i = 0; i < m; i++){
		int x, y;
		cin >> x >> y;
		ke[x].push_back(y);
		ke[y].push_back(x);
	}
	memset(c, -1, sizeof(c));
}
bool bfs(int u){
	queue<int> q;
	q.push(u);
	c[u] = 0;
	while(!q.empty()){
		int v = q.front(); q.pop();
		for(int x : ke[v]){
			if(c[x] == -1){
				c[x] = 1 - c[v];
				q.push(x);
			}else if(c[x] == c[v]) return false;
		}
	}
	return true;
}
main(){
	int t; cin >> t;
	while(t--){
		inp();
		bool ok = false;
		for(int i = 1; i <= n; i++){
			if(c[i] == -1){
				if(!bfs(i)){
					ok = true; break;
				}
			}
		}
		if(ok) cout << "NO";
		else cout << "YES";
		cout << endl;
	}
}
