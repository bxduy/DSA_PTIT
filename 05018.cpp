#include<bits/stdc++.h>
using namespace std;
main(){
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		int n = s.size();
		s = "1" + s;
		bool dp[n+1][n+1];
		memset(dp, false, sizeof(dp));
		for(int i = 1; i <= n; i++) dp[i][i] = true;
		int ans = 1;
		for(int len = 2; len <= n; len++){
			for(int i = 1; i <= n-len+1; i++){
				int j = i+len-1;
				if(len == 2 && s[i] == s[j]) dp[i][j] = true;
				else dp[i][j] = dp[i+1][j-1] && s[i] == s[j];
				if(dp[i][j]) ans = max(ans, len);
			}
		}
		cout << ans << endl;
	}
}
