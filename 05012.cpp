#include<bits/stdc++.h>
using namespace std;
int mod =1e9+7;
int c[1005][1005];
void so(){
	
	for(int i = 0; i <= 1000; i++){
		for(int j = 0; j <= i; j++){
			if(i == j || j == 0) c[i][j] = 1;
			else c[i][j] = (c[i-1][j-1] + c[i-1][j]) % mod;
		}
	}
}
main(){
	so();
	int t; cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;
		cout << c[n][m] << endl;
	}
}
