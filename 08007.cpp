#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n; cin >> n;
	long long ans = 0;
	queue<long long> q;
	q.push(1);
	while(true){
		long long tmp = q.front();
		if(tmp <= n) ans++;
		else break;
		q.pop();
		q.push(tmp * 10);
		q.push(tmp * 10 + 1);
	}
	cout << ans << endl;
}
main(){
	int t; cin >> t;
	while(t--){
		solve();
	}
}
