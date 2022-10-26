#include<bits/stdc++.h>
using namespace std;
int n, k, mod = 1e9+7;
vector<vector<long long>> operator*(vector<vector<long long>> a, vector<vector<long long>> b){
	vector<vector<long long>> c(n, vector<long long> (n));
	for(int i = 0; i < n;i++){
		for(int j = 0; j < n; j++){
			c[i][j] = 0;
			for(int k = 0; k < n; k++){
				c[i][j] = (c[i][j] + a[i][k] * b[k][j] % mod) % mod;
			}
		}
	}
	return c;
	
}
vector<vector<long long>> powmod(vector<vector<long long>> v, int k){
	if(k==1) return v;
	vector<vector<long long>> tmp = powmod(v, k/2);
	if(k%2) return tmp * tmp  * v ;
	return tmp * tmp ;
}
main(){
	int t; cin >> t;
	while(t--){
		cin >> n >> k;
		vector<vector<long long>> v(n, vector<long long>(n));
		for(int i = 0; i < n; i++) for(int j = 0; j <n; j++) cin >>v[i][j];
		v = powmod(v, k);
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cout << v[i][j] << " ";
			}
			cout << endl;
		}
	}
}
