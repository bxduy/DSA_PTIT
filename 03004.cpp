#include<bits/stdc++.h>
using namespace std;
main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n; int a[n];
		for(int &x:a) cin >> x;
		sort(a, a+n);
		long long s1 = 0, s2 = 0;
		for(int i = 0; i < n; i++){
			if(i%2) s1 = s1*10 + a[i];
			else s2 = s2*10 + a[i];
		}
		cout << s1 + s2 << endl;
	}
}
