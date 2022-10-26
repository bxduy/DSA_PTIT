#include<bits/stdc++.h>
using namespace std;
main(){
	int t; cin >> t;
	while(t--){
		int n, m = INT_MIN, k;
		cin >> n; int a[n]; map<int, int> mp;
		for(int &x : a){
			cin >> x;
			mp[x]++;
			if(mp[x] > m){
				k = x;
				m = mp[x];
			}
		}
		if(m > n/2) cout << k << endl;
		else cout << "NO" << endl;
	}
}
