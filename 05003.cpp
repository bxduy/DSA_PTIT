#include<bits/stdc++.h>
using namespace std;
int dp[105][105][105];
int n1, n2, n3;
string x, y, z;
void sl(){
	cin >> n1 >> n2 >> n3 >> x >> y >> z;
	x = " " + x; y = " " + y; z = " " + z;
	for(int i = 1; i <= n1; i++){
		for(int j = 1; j <= n2; j++){
			for(int k = 1; k <= n3; k++){
				if(x[i] == y[j] && y[j] == z[k]) dp[i][j][k] = dp[i-1][j-1][k-1] + 1;
				else dp[i][j][k] = max(dp[i-1][j][k], max(dp[i][j-1][k], dp[i][j][k-1]));
			}
		}
	}
	cout << dp[n1][n2][n3] << endl;
}
main(){
	int t; cin >> t;
	while(t--){
	 	
	 	
	 	sl();
	 	
	}
}
