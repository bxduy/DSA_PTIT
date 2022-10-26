#include<bits/stdc++.h>
using namespace std;
main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n; int a[n];
		for(int &x : a) cin >> x;
		int m1 = INT_MAX, m2 = INT_MAX;
		for(int i = 0; i < n; i++){
			if(m1 > a[i]){
				m2 = m1;
				m1 = a[i];
			}else if(m2 > a[i] && m1 != a[i]) m2 = a[i];
		}
		if(m2 == INT_MAX) cout << -1 << endl;
		else cout << m1 << " " << m2 << endl;
	}
}
