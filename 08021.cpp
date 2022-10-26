#include<bits/stdc++.h>
using namespace std;
int a[1005][1005], b[1005], n, m, ans;
bool ok;

void ql(int i, int j, int k){
	if(i == n && j == m){
		ans = min(ans, k-1);
		ok = true;
		return;
	}
	//if(ok) return;
	if(ans > k+1){
		if(i + a[i][j] <= n){
			b[k] = i;
			ql(i+a[i][j], j, k+1);
		}
		if(j + a[i][j] <= m){
			b[k] = j;
			ql(i, a[i][j] + j, k+1);
		}
	}
	
}
main(){
	int t; cin >> t;
	while(t--){
		
		cin >> n >> m;
		for(int i = 1; i <= n; i++) for(int j = 1; j <= m; j++) cin >> a[i][j];
		ans = INT_MAX;
		ok = false;
		ql(1, 1, 1);
		if(!ok) cout << -1 << endl;
		else cout << ans << endl;
	}
}

