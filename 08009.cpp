#include<bits/stdc++.h>
using namespace std;
void solve(){
	int s, t; cin >> s >> t;
	if(s > t){
		cout << s-t << endl;
		return;
	}
	int c[20005];
	for(int i = 0; i <20005; i++) c[i] = 1e9;
	c[s] = 0;
	queue<int> q;
	q.push(s);
	while(c[t] == 1e9){
		int tmp = q.front(); q.pop();
		if(tmp - 1 > 0 && c[tmp-1] == 1e9){
			q.push(tmp-1);
			c[tmp-1] = c[tmp] + 1;
		}
		if(tmp * 2 <= 20000 && c[tmp*2] == 1e9){
			q.push(tmp * 2);
			c[tmp*2] = c[tmp] + 1;
		}
	}
	cout << c[t] << endl;
}
main(){
	int t; cin >> t;
	while(t--){
		solve();
	}
}
