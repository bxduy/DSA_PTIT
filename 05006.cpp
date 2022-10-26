#include<bits/stdc++.h>
using namespace std;
main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		
		int a[n], dp[n];
		for(int i = 0; i < n; i++) cin >> a[i];
		dp[0] = a[0];
		for(int i = 1; i < n; i++){
			int s = 0;
			for(int j = 0; j < i; j++){
				if(a[j] < a[i]) s = max(s, dp[j]);
			}
			dp[i] = a[i] + s;
		}
		sort(dp, dp+n);
		 cout << dp[n-1] << endl;
	}
}
