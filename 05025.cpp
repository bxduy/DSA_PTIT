#include<bits/stdc++.h>
using namespace std;
	long long dp[105];
void so(){

	memset(dp, 0, sizeof(dp));
	dp[0] =1;
	for(int i = 1; i <= 55; i++){
		for(int j = i-1; j >= max(0, i-3); j--){
			dp[i] = (dp[i] + dp[j]);
		}
	}
}

main(){
	so();
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		cout << dp[n] << endl;
	}
}
