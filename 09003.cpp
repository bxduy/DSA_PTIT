#include<bits/stdc++.h>
using namespace std;
main(){
	int t; cin >> t;
	while(t--){
		int n, m; cin >> n >> m;
		vector<int> v[n+5];
		for(int i = 0; i < m; i++){
			int x, y;
			cin >> x >> y;
			v[x].emplace_back(y);
			//v[y].emplace_back(x);
		}
		for(int i = 1; i <= n; i++){
			cout << i << ":";
			for(int x : v[i])
			cout << " " << x;
			cout << endl;
		}
	}
}
