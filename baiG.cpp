#include<bits/stdc++.h>
using namespace std;
main(){
	int t; cin >> t;
	while(t--){
		int n, k; cin >> n >> k; map<int, int>mp;
		int a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
			mp[a[i]]++;
		}
		int cnt = 0;
		for(int i = 0; i < n; i++){
			if(mp[k-a[i]] != 0) cnt += mp[a[i]];
			if(a[i]*2==k) cnt--;
			cout << mp[a[i]];
		}
		cout << cnt/2 << endl;
	}
}
