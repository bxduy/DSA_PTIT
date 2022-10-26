#include<bits/stdc++.h>
using namespace std;
main(){
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		int n = s.size();
		long long sum = s[0] - '0', dp[n] = {0};
		dp[0] = s[0] - '0';
		for(int i = 1; i < n; i++){
			sum = sum * 10 + s[i]-'0';
			dp[i] =dp[i-1] + sum;
		}
		cout << dp[n-1] << endl;
	}
}
