#include<bits/stdc++.h>
using namespace std;

main(){
	int n; cin >> n;
	vector<string> v;
	for(int i = 0; i < n; i++){
		string s; cin >> s;
		v.push_back(s);
	}
	string k; cin >> k;
	for(int i = 0; i < n; i++){
		if(v[i] != k) cout << v[i] << " ";
	}
}
