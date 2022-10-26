#include<bits/stdc++.h>
using namespace std;
int a[100], x[100], s, n;
vector<vector<int>> v;
bool ok;
void ql(int pos, int cnt, int sum){
	if(s == sum){
		vector<int> tmp(x, x+cnt);
		v.push_back(tmp);
		ok = true;
		return;
	}
	for(int j = pos; j <= n; j++){
		if(sum + a[j] <= s){
			x[cnt] = a[j];
			ql(j, cnt+1, sum + a[j]);
		}
	}
}
main(){
	int t; cin >> t;
	while(t--){
		cin >> n >> s;
		for(int i = 1; i <= n; i++){cin >> a[i];
		}
		v.clear();
		ok = false;
		ql(1, 0 , 0);
		if(ok)
		for(auto x : v){
			cout << "[";
			for(int i = 0; i < x.size(); i++){
				cout << x[i];
				cout << (i == x.size()-1 ? "] " : " ");
			}
			
		}
		else cout << -1;
		cout << endl;
	}
}
