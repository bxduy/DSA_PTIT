#include<bits/stdc++.h>
using namespace std;
string repair(string s){
	stack<char> st;
	for(int i = 0; i < s.size(); i++){
		if(s[i] == '('){
			if(s[i-1] == '-' || s[i-1] == '+') st.push(s[i-1]);
		}
		if(st.size() && st.top() =='-'){
			if(s[i] == '-') s[i] = '+';
			else if(s[i] == '+') s[i] = '-';
		}
		if(s[i] == ')' && st.size()) st.pop();
	}
	string ans = "";
	for(int i = 0; i < s.size(); i++){
		if(s[i] != ')' && s[i] != '(') ans += s[i];
	}
	return ans;
}
void solve(){
	string s1, s2;
	cin >> s1 >> s2;
	if(repair(s1) == repair(s2)) cout << "YES" << endl;
	else cout << "NO" << endl;
}
main(){
	int t; cin >> t;
	while(t--){
		solve();
	}
}
