#include<bits/stdc++.h>
using namespace std;
long long c[100000];
void solve(){
	int n; cin >> n;
	memset(c, -1, sizeof(c));
	queue<int> q;
	q.push(n);
	c[n] = 0;
	while(!q.empty()){
		int v = q.front();
		q.pop();
		int tmp = v-1;
		if(c[tmp] == -1 && tmp > 0){
			c[tmp] = c[v]+1;
			q.push(tmp);
		}
		for(int i = 2; i <= sqrt(v); i++){
			int tmp, a;
			if(v%i == 0){
				 a = v/i;
				a = max(a, i);
			
			tmp = a;
			if(c[tmp] == -1){
				c[tmp] = c[v] + 1;
				q.push(tmp);
			}
		}
		}
	}
	cout << c[1] << endl;
}
main(){
	int t; cin >> t;
	while(t--){
		solve();
	}
}
