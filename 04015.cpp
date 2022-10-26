#include<bits/stdc++.h>
using namespace std;
main(){
	int t; cin >> t;
	while(t--){
		int n, k; cin >> n >> k;
		int a[n];
		int ans = -1;
		for(int i = 0; i < n; i++) {
			cin >> a[i];
			if(a[i] <= k) ans  = i+1;
		}
		cout << ans << endl;
	}
}
