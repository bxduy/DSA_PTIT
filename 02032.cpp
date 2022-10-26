#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> v;
int a[100], x[100], k, cnt, n;
void ql(int pos, int cnt, int sum){
	if(k == sum){
		vector<int> tmp;
		for(int i = 0; i < cnt; i++){
			tmp.push_back(x[i]);
		}
		v.push_back(tmp);
		return;
	}
	for(int j = pos; j <= n; j++){
		if(a[j] + sum <= k){
			x[cnt] = a[j];
			ql(j, cnt+1, sum + a[j]);
		}
	}
}
main(){
	int t; cin >> t;
	while(t--){
		cin >> n >> k;
		for(int i = 1; i <= n; i++) cin >> a[i];
		sort(a+1, a+n+1);
		ql(1, 0, 0);
		if(v.size() != 0){
			cout << v.size() << " ";
			
			for(auto x : v){
				cout << "{";
				for(int i = 0; i < x.size(); i++)if(i != x.size()-1) cout << x[i] << " ";
				else cout << x[i];
				cout << "}";
				cout << " ";
			}
		}else cout << -1;
		cout << endl;
		v.clear();
	}
}
