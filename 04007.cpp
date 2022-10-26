#include<bits/stdc++.h>
using namespace std;
void solve(){
	int  k;
	string a, b;
	cin >> k >> a >> b;
	while(a.size() < b.size()) a = "0" + a; 
	while(b.size() < a.size()) b = "0" + b; 
	int carry = 0, tmp = 0;
	string res = "";
	for(int i = a.size() - 1; i >= 0; i--){
		tmp = a[i] - '0' + b[i] - '0' + carry;
		res = (char)(tmp % k + '0') + res;
		carry = tmp/k;
	}
	if(carry > 0) res = "1" + res;
	cout << res << endl;
}
main(){
	int t; cin >> t;
	while(t--) solve();
}
