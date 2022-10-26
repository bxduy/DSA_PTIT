#include<bits/stdc++.h>
using namespace std;
int n, m, k, s, p, used[100], x[100];
vector<int> prime;
vector<vector<int>> v;
bool nt(int n){
	if(n < 2) return false;
	for(int i = 2; i <= sqrt(n); i++) if(n%i == 0) return false;
	return true;
}
void inp(){
	cin >> n >> p >> s;
	prime.clear();
	v.clear();
	for(int i = p+1; i <= s; i++){
		if(nt(i)) prime.push_back(i);
	}
	m = prime.size();
	memset(used, false, sizeof(used));
}
void ql(int sum, int pos, int cnt){
	if(sum == s && cnt == n){
		vector<int> tmp(x, x+cnt);
		v.push_back(tmp);
		return;
	}
	for(int j = pos; j < m; j++){
		if(sum + prime[j] <= s && !used[j]){
			x[cnt] = prime[j];
			used[j] = true;
			ql(sum+prime[j], j, cnt+1);
			used[j] = false;
		}
	}
}
main(){
	int  t; cin >> t;
	while(t--){
		inp();
		ql(0, 0 ,0);
		cout << v.size() << endl;
		for(auto x : v){
			for(int i : x) cout << i << " ";
			cout << endl;
		}
	}
}

