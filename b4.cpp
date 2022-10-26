#include<bits/stdc++.h>
using namespace std;
int a[100], n;
vector<vector<int>> v;
void ql(int cnt, int pos, int sum){
	if(sum == n){
		vector<int> tmp(a, a+cnt);
		v.push_back(tmp);
		return;
	}
	for(int j = pos; j >= 1; j--){
		if(sum + j <= n){
			a[cnt] = j;
			ql(cnt+1, j, sum + j);
		}
	}
}
main(){
	int t; cin >> t;
	while(t--){
		cin >> n;
		v.clear();
		ql(0, n, 0);
		cout << v.size() << endl;
		for(auto x : v){
			cout << "(";
			for(int i = 0; i< x.size(); i++){
				cout << x[i];
				cout << (i == x.size()-1?") ":" ");
			}
			
		}
		cout << endl;
	}
}
