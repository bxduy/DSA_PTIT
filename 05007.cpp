#include<bits/stdc++.h>
using namespace std;
main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n], dp[n];
		for(int &x : a) cin >> x;
		dp[0] = a[0]; dp[1] = a[1]; dp[2] = a[2] + a[0];
		for(int i = 3; i < n; i++){
			dp[i] = a[i] + max(dp[i-2], dp[i-3]);
		}
		sort(dp, dp+n);
		cout << dp[n-1] << endl;
	}
}
