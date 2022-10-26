#include<bits/stdc++.h>
using namespace std;
main(){
	int t; cin >> t;
	while(t--){
		int m = INT_MAX, n;
		cin >> n;
		int a[n];
		for(int &x : a) cin >> x;
		sort(a, a+n);
		for(int i = 0; i < n-1; i++){
			m = min(m, a[i+1]-a[i]);
		}
		cout << m << endl;
	}
}
