#include<bits/stdc++.h>
using namespace std;
int check(int a[], int n, int k){
	int r = n-1, l = 0;
	while(l <= r){
		int m = l + (r - l)/2;
		if(a[m] == k) return m + 1;
		if(a[m] > k) r = m-1;
		else l = m+1;
	}
	return -1;
}
main(){
	int t; cin >> t;
	while(t--){
		int n, k; cin >> n >> k;
		int a[n];
		for(int &x : a) cin >> x;
		int index = check(a, n, k);
		if(index == -1) cout << "NO" << endl;
		else cout << index << endl;
	}
}
