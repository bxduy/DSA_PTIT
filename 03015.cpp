#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n, m, s;
	cin >> n >> s >> m;
	int need = s * m;
	int ans = 0, sum = 0;
	for(int i = 1; i <= s; i++){
		if( i % 7 == 0) continue;
		else{
			ans++;
			if(ans * n >= need){
				cout << ans << endl;
				return;
			}
		}
	}
	cout << -1 << endl;
}
main(){
	int t; cin >> t;
	while(t--){
		solve();
	}
}
