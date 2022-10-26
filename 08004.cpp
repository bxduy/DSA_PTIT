#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n; cin >> n; cin.ignore();
	string s; cin >> s;
	int f[26]; memset(f, 0, sizeof(f));
	for(int i = 0; i < s.size(); i++) f[s[i] - 'A']++;
	sort(f, f+26, greater<int>());
	priority_queue<long long>q;
	for(int i = 0; i < 26; i++) q.push(f[i]);
	long long res = 0;
	while(!q.empty()){
		long long tmp = q.top();
		if(n){
			q.pop();
			q.push(tmp-1); n--;
		}else{
			res += tmp * tmp;
			q.pop();
		}
	}
	cout << res << endl;
}
main(){
	int t; cin >> t;
	while(t--){
		solve();
	}
}
