#include<bits/stdc++.h>
using namespace std;
int best(int a[], int n){
	int maxx[n+1], m = INT_MIN;
	maxx[0] = 0;
	for(int i = 1; i <= n; i++){
		maxx[i] = max(a[i], a[i] + maxx[i-1]);
		m = max(m, maxx[i]);
	}	
	return m;
}
main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n+1];
		for(int i = 1; i <= n; i++) cin >> a[i];
		cout << best(a, n) << endl;
	}
}
