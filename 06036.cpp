#include<bits/stdc++.h>
using namespace std;
bool check(int a[], int n, int k){
	sort(a, a+n);
	for(int i = n-1; i >= 2; i--){
		int l = 0, r = i - 1;
		while(l < r){
			if(a[l] + a[r] == k - a[i]) return true;
			if(a[l] + a[r] > k-a[i]) r--;
			else l++;
		}
	}
	return false;
}
main(){
	int t; cin >> t;
	while(t--){
		int n, k; cin >> n >> k; int a[n];
		for(int &x : a) cin >> x;
		if(check(a, n, k)) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}
