#include<bits/stdc++.h>
using namespace std;
int a[50], n, k;
vector<vector<int>> v;
void ql(int pos, int cnt){
	if(cnt == k){
		vector<int>tmp(a, a+cnt);
		v.push_back(tmp);
		return;
	}
	for(int j = pos; j <= n; j++){
		if(cnt + 1 <= k){
			a[cnt] = j;
			ql(j, cnt+1);
		}
	}
}
main(){
	char c; cin >> c >> k;
	n = c - 'A' + 1;
	ql(1, 0);
	for(auto x : v){
		for(int i = 0; i < x.size(); i++){
			cout << (char)(x[i] + 64);
		}
		cout << endl;
	}
}
