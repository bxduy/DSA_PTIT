#include<bits/stdc++.h>
using namespace std;
void solve(){
	string s; cin >> s;
	int f[26], sum = 0;
	memset(f, 0, sizeof(f));
	for(int i = 0; i < s.size(); i++) f[s[i] - 'a']++;
	sort(f, f+26);
	for(int i = 0; i < 25; i++) sum += f[i];
	
	if(sum + 1 >= f[25]) cout << 1 << endl;
	else cout << -1 << endl;
}
main(){
	int t; cin >> t;
	while(t--){
		solve();
	}
}
