#include<bits/stdc++.h>
using namespace std;
main(){
	int t; cin >> t;
	while(t--){
		int n, k; cin >> n >> k; int a[n]; map<int, int> mp;
		for(int &x : a){
			cin >> x;
			mp[x]++;
		} 
		long long ans = 0;
		for(int x : a){
			ans += mp[k - x];
			if(x * 2 == k) ans--;
		}
		cout << ans/2 << endl;
	}
}
