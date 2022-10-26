#include<bits/stdc++.h>
using namespace std;
vector<string> v(long long n){
	vector<string> tmp;
	for(int i = 1; i*i*i <= n; i++){
		long long m = i*i*i;
		string s = to_string(m);
		tmp.push_back(s);
	}
	return tmp;
}
string find(string s, vector<string> v){
	reverse(v.begin(), v.end());
	int sum = v.size();
	for(int i = 0; i < sum; i++){
		string str = v[i];
		int n = str.size();
		int index = 0;
		int m = s.size();
		for(int j = 0; j < m; j++){
			if(s[j] == str[index]) index++;
			if(n == index) return str;
		}
	}
	return "-1";
}
void solve(long long n){
	vector<string> vec = v(n);
	string num = to_string(n);
	string ans = find(num, vec);
	cout << ans << endl;
}
main(){
	int t; cin >> t;
	while(t--){
		long long n;
		cin >> n;
		solve(n);
	}
}
