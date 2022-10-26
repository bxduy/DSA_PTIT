#include<bits/stdc++.h>
using namespace std;
main(){
	
		int n; cin >> n; int a[n];
		for(int &x : a) cin >> x;
		sort(a, a+n);
		int m1 = max(a[n-1]*a[n-2], a[0] * a[1]);
		int m2 = max(a[n-1]*a[n-2]*a[n-3], a[0]*a[1]*a[n-1]);
		cout << max(m1, m2) << endl;
	
}
