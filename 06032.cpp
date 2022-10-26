#include<bits/stdc++.h>
using namespace std;
int check(int a[], int n, int k){
	
	int res = -1;
	for(int i = n-1; i >= 2; i--){
		int l = 0, r = i - 1;
		while(l < r){
			if(a[l] + a[r] < k - a[i]){
				res = i;
			}
			else r--;
			
		}
	}
	return res;
}
main(){
	int t; cin >> t;
	while(t--){
		int n, k; cin >> n >> k; int a[n];
		for(int &x : a) cin >> x;
		sort(a, a+n);
		int ans = 0;
		for(int i = 2; i < n; i++){
			int l = check(a, n, k);
			if(ans != -1) ans += l;
		}
		cout << ans << endl;
	}
}

