#include<bits/stdc++.h>
using namespace std;
main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n; int a[n];
		for(int &x : a) cin >> x;
		sort(a, a+n);
		int ans = n, m = n/2;
		for(int i = 0; i < n/2 && m < n; i++){
			while(m < n){
				if(a[i] * 2 <= a[m]){
					ans--; m++;
				
					break;
				}else m++;
			}
		}
		cout << ans << endl;
	}
}
