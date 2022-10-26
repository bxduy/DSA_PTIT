#include<bits/stdc++.h>
using namespace std;
bool check(int n){
	priority_queue<int> q;
	while(n){
		q.push(n % 10);
		n/=10;
	}
	if(q.top() > 5) return false;
	else{
		int tmp = q.top();
		q.pop();
		while(q.size()){
			if(tmp > 5) return false;
			if(tmp == q.top()) return false;
			tmp = q.top(); q.pop();
		}
	}
	return true;
}
main(){
	int t; cin >> t;
	while(t--){
		int l , r, ans = 0;
		cin >> l >> r;
		for(int i = l; i <= r; i++){
			if(check(i)) ans++;
		}
		cout << ans << endl;
	}
}
