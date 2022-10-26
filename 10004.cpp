#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> v;
int V, E, x, y;
void solve(){
	v.clear();
	cin >> V >> E;
	v.resize(1005);
	for(int i = 1; i <= E; i++){
		cin >> x >> y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	int cnt = 0;
	for(int i = 1; i <= V; i++){
		if(v[i].size() % 2) cnt++;
	}
	if(cnt == 0) cout << 2;
	else if(cnt == 2) cout << 1;
	else cout << 0;
	cout << endl;
}
main(){
	int t; cin >> t;
	while(t--){
		solve();
	}
}
