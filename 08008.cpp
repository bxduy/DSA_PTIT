#include<bits/stdc++.h>
using namespace std;
void solve(){
	long long n; cin >> n;
	long long ans = 0;
	queue<long long> q;
	q.push(1);
	while(true){
		long long tmp = q.front();
		if(tmp % n == 0){
			cout << tmp << endl;
			break;
		}
		//else break;
		q.pop();
		q.push(tmp * 10);
		q.push(tmp * 10 + 1);
	}
	//cout << ans << endl;
}
main(){
	int t; cin >> t;
	while(t--){
		solve();
	}
}
