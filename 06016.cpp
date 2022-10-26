#include<bits/stdc++.h>
using namespace std;
main(){
	int t, m, n; cin >> t;
	while(t--){
		cin >> n >> m;
		int a[n], b[m];
		for(int i = 0; i < n; i++) cin >> a[i];
		for(int i = 0; i < m; i++) cin >> b[i];
		sort(a, a+n); sort(b, b+n);
		cout << a[n-1]*b[0] << endl;
	}
}
