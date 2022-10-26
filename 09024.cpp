#include<bits/stdc++.h>
using namespace std;
bool v[1005];
vector<int> a[1005];
int n, m, u;
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
void bfs(int u){
	queue<int> q;
	q.push(u);
	v[u] = true;
	while(!q.empty()){
		int x = q.front();
		q.pop();
		cout << x << " ";
		for(int k : a[x]){
			if(!v[k]){
				q.push(k);
				v[k] = true;
			}
		}
	}
}
main(){
	int t; cin >> t;
	while(t--){
		inp();
		bfs(u);
		cout << endl;
	}
}
