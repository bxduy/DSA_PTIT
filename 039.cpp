#include<bits/stdc++.h>
using namespace std;
main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n; int a[n]; map<int, int> mp;
		for(int &x : a) {
			cin >> x;
			mp[x]++;
		}
		for(int i = 0; i < n; i++){
			
			if(mp[a[i]] > 1){
				cout << a[i] << endl;
				break;
			}
			else if(i == n-1) cout << "NO" << endl;
		}
	}
}
