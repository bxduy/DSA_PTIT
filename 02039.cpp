#include<bits/stdc++.h>
using namespace std;
int n, a[100];
vector<vector<int>> v;
void inp(){
	cin >> n;
	v.clear();
}
void ql(int sum, int pos, int cnt){
	if(sum == n){
		vector<int> tmp(a, a+cnt);
		v.push_back(tmp);
		return;
	}
	for(int j = pos; j >= 1; j--){
		if(sum+j <= n){
			a[cnt] = j;
			ql(sum+j, j, cnt+1);
		}
	}
}
main(){
	int t; cin >> t;
	while(t--){
		inp();
		ql(0, n, 0);cout << v.size() << endl;
		for(auto x : v){
			cout << "(";
			for(int i = 0; i < x.size(); i++){
				cout << x[i];
				cout << (i == x.size() - 1 ? ")" : " ");
			}
			cout << " ";
		}
		cout << endl;
	}
}
