#include<bits/stdc++.h>
using namespace std;
long long sl(string s){
	long long res = 0;
	int n = s.size();
	for(int i = 0; i < n; i++){
		if(s[i] == '1') res += (long long)pow(2, n-1-i);
	}
	return res;
}
void solve(){
	string a, b;
	cin >> a >> b;
	cout << sl(a) * sl(b) << endl;
}
main(){
	int t; cin >> t;
	while(t--){
		solve();
	}
}
