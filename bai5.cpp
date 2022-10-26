#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin >> t;
	while(t--){
		long long n, q;
		long long k, m = 1e16;
		cin >> n;
		long long l[n], h[n], dp[n];
		for(long long &x : l) cin >> x;
		for(long long &x : h) cin >> x;
		cin >> q;
		dp[0] = l[0] * h[0];
		for(int i = 1; i < n; i++){
			dp[i] =  (l[i] - l[i-1] - 1) * h[i];
			for(int j = i-1; j >= 0; j--){
				if(h[i] > h[j]){
					dp[i] = dp[i] + dp[j] +  ( h[i] - h[j]);
					m = min(m, h[i] - h[j]);
					if(j != 0){
						dp[i] = dp[i] + (h[i] - h[j]) * (l[j] - 1 - l[j-1]);
					}else{
						dp[i] = dp[i] + l[0] * min(m, h[i] - h[0]);
					}
				}else{
					dp[i] = dp[i] + dp[j] ;
				j=-1;
				}
			}
		}
		
		for(int i = 0; i < n; i++) cout << dp[i] << endl;
		while(q--){
			cin >> k;
			auto it = lower_bound(dp, dp+n, k);
			if((it-dp) == 0) cout << 0;
			else
			cout << (it-dp)  << endl;
		}
	}
}
