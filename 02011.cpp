#include<bits/stdc++.h>
using namespace std;
int n, check[35], ok;
long long s, sum, a[35];
void Try(int i, int cnt){
	if(sum == s && i == cnt){
		ok = 1;
		return;
	}
	if(i == cnt && cnt != s) return;
	for(int j = 1; j <= n; j++){
		if(j > check[i-1]){
			sum += a[j];
			check[i] = j;
			if(sum <= s) Try(i+1, cnt);
			sum -= a[j];
			check[i] = 0;
		}
	}
}
void solve(){
	cin >> n >> s;
	for(int i = 1; i <= n; i++) cin >> a[i];
	ok = 0;
	int cnt;
	for(cnt = 1; cnt <= n; cnt++){
		sum = 0;
		Try(0, cnt);
		if(ok == 1) break;
	}
	if(ok == 1) cout << cnt << endl;
	else cout << -1 << endl;
}
main(){
//	
	int t; cin >> t;
	while(t--){
		solve();
	}
}
