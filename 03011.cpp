#include<bits/stdc++.h>
using namespace std;
int mod = 1e9+7;
void solve(){
	int n; cin >> n;
	int a[n];
	priority_queue<long long, vector<long long>, greater<long long>> q;
	for(int &x : a) cin >> x;
	for(int x : a) q.push(x);
	long long ans = 0;
	while(q.size() > 1){
		long long top1 = q.top(); q.pop();
		long long top2 = q.top(); q.pop();
		long long sum = (top1+top2) % mod;
		ans = (ans + sum) % mod;
		q.push(sum);
	}
	cout << ans << endl;
}
main(){
	int t; cin >> t;
	while(t--){
		solve();
	}
}
