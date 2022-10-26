#include<bits/stdc++.h>
using namespace std;
int n, k;
set<vector<int>> s;
int a[20], b[20];
void push(){
	vector<int> v;
	for(int i = 1; i <= k; i++){
		v.push_back(b[a[i]]);
	}
	s.insert(v);
}
void ql(int i){
	for(int j = a[i-1] + 1; j <= n-k+i; j++){
		a[i] = j;
		if(i == k) push();
		else ql(i+1);
	}
}
main(){
	int t; cin >> t;
	while(t--){
		s.clear();
		cin >> n >> k;
		for(int i = 1; i <= n; i++) cin >> b[i];
	
		sort(b+1, b+n+1);
		ql(1);
		for(auto x : s){
			for(int it : x) cout << it << " ";
			cout << endl;
		}
	}
}
