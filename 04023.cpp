#include<bits/stdc++.h>
using namespace std;
int search(int a[], int l, int r, int x){
	int res = -1;
	while(l <= r){
		int m = (l+r)/2;
		if(a[m] >  x){
			res = m;
			l = m+1;
		}else r = m-1;
	}
	return res;
}
main(){
	int t; cin >> t;
	while(t--){
		int n, k; cin >> n >> k;
		int a[n];
		for(int &x : a) cin >> x;
		sort(a, a+n, greater<int>());
		long long ans = 0;
		for(int i = 0; i < n - 1; i++){
			int res = search(a, i+1, n-1, a[i] - k);
			if(res != -1) ans += res - i;
		}
		cout << ans << endl;
	}
}
