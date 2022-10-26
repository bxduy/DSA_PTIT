#include<bits/stdc++.h>
using namespace std;
int n, k, check[10] = {0}, res = INT_MAX;
vector<int> v;
vector<string> s;
void solve(){
	int mx = INT_MIN, mn = INT_MAX;
	for(int i = 0; i < n; i++){
		int sum = 0;
		for(int x : v){
			sum = sum * 10 + s[i][x-1] - '0';
		}
		mx = max(mx, sum);
		mn = min(mn, sum);
	}
	res = min(res, mx- mn);
}
void ql(int i){
	for(int j = 1; j <= k; j++){
		if(!check[j]){
			check[j] = 1;
			v.push_back(j);
			if(i == k) solve();
			else ql(i+1);
			v.pop_back();
			check[j] = 0;
		}
	}
}
main(){
	cin >> n >> k;
	for(int i = 0; i < n; i++){
		string str; cin >> str;
		s.push_back(str);
	}
	ql(1);
	cout << res;
}

