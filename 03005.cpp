#include<bits/stdc++.h>
using namespace std;
main(){
	int t; cin >> t;
	while(t--){
		int n, k, s = 0, s2 = 0;
		 cin >> n >> k; int a[n];
		for(int &x : a){
			cin >> x;
			s += x;
		}
		sort(a, a +n);
		k = min(k, n-k);
		for(int i = 0; i < k; i++) s2 += a[i];
		cout << s-2*s2 << endl;
	}
}
