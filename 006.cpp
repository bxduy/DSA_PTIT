#include<bits/stdc++.h>
using namespace std;
main(){
	int n; cin >> n;
	vector<string> v;
	map<string, int> mp;
	for(int i = 0; i < n; i++){
		string s; cin >> s;
		v.push_back(s);
		mp[s]++;
	}
	for(int i = 0; i < n; i++){
		if(mp[v[i]] > 0) cout << v[i] << " ";
		mp[v[i]] = 0;
	} 
}
