#include<bits/stdc++.h>
using namespace std;
main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		for(int &x : a) cin >> x;
		int dp[n], j;
		for(int i = 0; i < n; i++) dp[i] = 1;
		
		for(int i = 1; i < n; i++){
			j = i-1;
			while(j >= 0){
			
				if(a[i] >= a[j]) dp[i] = dp[j] + dp[i];
				j = j - dp[j];
			}
		}
		for(int i = 0; i < n; i++) cout << dp[i] << " ";
		cout << endl;
	}
}
