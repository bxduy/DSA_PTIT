#include<bits/stdc++.h>
using namespace std;
void solve(long long tu, long long mau){
	if(tu == 0 && mau == 0) return;
	if(mau % tu == 0){
		cout << 1 << "/" << mau/tu << endl;
		return;
	}
	
	int n = mau/ tu + 1;
	cout << "1/" << n << " + " ;
	solve(tu*n-mau, mau*n);
}
main(){
	int t; cin >> t;
	while(t--){
		long long a, b; cin >> a >> b;
		solve(a,b);
	}
}
