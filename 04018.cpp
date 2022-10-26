#include<bits/stdc++.h>
using namespace std;
main(){
	int t; cin >> t;
	while(t--){
		int n, ans = 0; cin >> n;
		int a[n];
		for(int i = 0 ; i < n; i++){
			cin >> a[i];
			if(a[i] == 0) ans++;
		}
		cout << ans << endl;
	}
}
