#include<bits/stdc++.h>
using namespace std;
main(){
	int t, n; cin >> t;
	while(t--){
		cin >> n; int a[n];
		for(int i = 0; i < n; i++) cin >> a[i];
		int m1, m2; m1 = m2 = INT_MAX;
		for(int i = 0; i < n; i++){
			if(a[i] < m1){
				m2 = m1;
				m1 = a[i];
			}
			else if(a[i] < m2 && a[i] != m1) m2 = a[i];
		}
		if(m2 != INT_MAX) 
		cout << m1 << " " << m2 << endl;
		else cout << -1 << endl;
	}
}
