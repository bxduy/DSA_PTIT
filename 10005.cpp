#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> v, z;
int V, E, x, y;
void solve(){
	v.clear(); z.clear();
	cin >> V >> E;
	v.resize(1005); z.resize(1005);
	for(int i = 1; i <= E; i++){
		cin >> x >> y;
		v[x].push_back(y);
		z[y].push_back(x);
	}
	int cnt = 0;
	for(int i = 1; i <= V; i++){
		if(v[i].size() != z[i].size()){
			cout << 0 << endl;
			return;
		}
	}
	
	cout << 1 << endl;
}
main(){
	int t; cin >> t;
	while(t--){
		solve();
	}
}
