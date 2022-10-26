#include<bits/stdc++.h>
using namespace std;
struct toado{
	int x, y, z;
};
int dx[8] = {-1, -2, -2, -1, 1, 2, 2, 1};
int dy[8] = {-2, -1, 1, 2, 2, 1, -1, -2};
int res = 0;
void bfs(int x1, int y1, int x2, int y2){
	queue<toado> q;
	bool check[30][30];
	memset(check, false, sizeof(check));
	check[x1][y1] = true;
	q.push({x1, y1, 0});
	
	while(!q.empty()){
		toado a = q.front();
		q.pop();
		if(a.x == x2 && a.y == y2){
			res =  a.z;
			return;
		}
		if(a.z > res) continue;
		for(int i = 0; i < 8; i++){
			int i1 = dx[i] + a.x;
			int j1 = dy[i] + a.y;
			int z1 = a.z + 1;
			if(i1 >= 1 && i1 <= 8 && j1 >= 1 && j1 <= 8 && !check[i1][j1]){
				q.push({i1, j1, z1});
				check[i1][j1] = true;
			}
		}
	}
}
void solve(){
	res = INT_MAX;
	char xx1, xx2;
	int y1, y2;
	cin >> xx1 >> y1 >> xx2 >> y2;
	int x1 = xx1 - 'a' + 1;
	int x2 = xx2 - 'a' + 1;
	bfs(x1, y1, x2, y2);
	cout << res << endl;
}
main(){
	int t; cin >> t;
	while(t--){
		solve();
	}
}

