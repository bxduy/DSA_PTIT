#include<bits/stdc++.h>
using namespace std;
int process(int a[], int b[], int n, int v){
	int dp[n+1][n+1] = {0};
	for(int i = 1; i <= n; i++){
		dp[i][0] = dp[0][i] = 0;
	}
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= v; j++){
			dp[i][j] = max(dp[i-1][j], (j >= a[i]) ? b[i] + dp[i-1][j-a[i]] : 0);
		}
	}
	return dp[n][v];
}
main(){
	int t; cin >> t;
	while(t--){
		int n, v;
		cin >> n >> v;
		int a[n+1], b[n+1];
		for(int i = 1; i <= n; i++) cin >> a[i];
		for(int i = 1; i <= n; i++) cin >> b[i];
		cout << process(a, b, n, v) << endl;
	}
}
