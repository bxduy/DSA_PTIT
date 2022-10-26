#include<bits/stdc++.h>
using namespace std;
int count(string a, string b){
	int ans = 0;
	int n = a.size(), m = b.size();
	int dp[n+1][m+1];
	for(int i = 0; i <= n; i++) dp[i][0] = 0;
	for(int i = 0; i <= m; i++) dp[0][i] = 0;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			dp[i][j] = (a[i-1] == b[j-1] ? dp[i-1][j-1]+1 : max(dp[i-1][j], dp[i][j-1]));
			ans  = max(ans, dp[i][j]);
		}
		//ans = max(ans, dp[i][j]);
	}
	return ans;
}
main(){
	int t; cin >> t;
	while(t--){
		string a, b;
		 cin >> a >> b;
		cout << count(a, b) << endl;
	}
}
