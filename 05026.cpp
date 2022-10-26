#include<bits/stdc++.h>
using namespace std;
main(){
	int n, c; cin >> c >> n;
	int a[n+1];
	for(int i = 1; i <= n; i++) cin >> a[i];
	int dp[n+1][c+1];
	memset(dp, 0, sizeof(dp));
	for(int i = 0; i <= c; i++)dp[0][i] = 0;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= c; j++){
			dp[i][j] = max(dp[i-1][j], (j >= a[i]) ? a[i] + dp[i-1][j-a[i]] : 0);
		}
	}
	cout << dp[n][c];
}
