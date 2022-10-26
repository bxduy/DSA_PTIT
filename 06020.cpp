#include<bits/stdc++.h>
using namespace std;
main(){
	int t, n, x; cin >> t;
	while(t--){
		cin >> n >> x;
		int a[n];
		for(int &i : a) cin >> i;
		if(binary_search(a, a+n, x)) cout << 1 << endl;
		else cout << -1 << endl;
	}
}
