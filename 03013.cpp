#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n; cin >> n;
	string s; cin >> s;
	int f[26], sum = 0;
	memset(f, 0, sizeof(f));
	for(int i = 0; i < s.size(); i++) f[s[i] - 'A']++;
	sort(f, f+26, greater<int>());
	
	
	if(n * (f[0] - 1) + 1 <= s.size()) cout << 1 << endl;
	else cout << -1 << endl;
}
main(){
	int t; cin >> t;
	while(t--){
		solve();
	}
}
