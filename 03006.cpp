#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n; cin >> n;
		int a[n], b[n];
		for(int i  = 0; i < n; i++){
			cin >> a[i];
			b[i] = a[i];
		}
		sort(b, b+n);
		for(int i = 0; i < n; i++){
			if(a[i] != b[i] && b[i] != a[n-i-1]){
				cout << "No" << endl;
				return;
			}
		}
		 cout << "Yes" << endl;
}
main(){
	int t; cin >> t;
	while(t--){
		solve();
	}
}

