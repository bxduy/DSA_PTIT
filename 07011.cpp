#include<bits/stdc++.h>
using namespace std;
bool check(char c){
	if(c == '+' || c == '-' || c== '*' || c == '/') return true;
	return false;
}
void solve(){
	string s; cin >> s;
	stack<string> st;
	for(int i = 0; i < s.size(); i++){
		if(!check(s[i])) st.push(string(1, s[i]));
		else{
			string s1 = st.top(); st.pop();
			string s2 = st.top(); st.pop();
			string tmp = s[i] + s2 + s1;
			st.push(tmp);
		}
	}
	cout << st.top() << endl;
}
main(){
	int t; cin >> t; cin.ignore();
	while(t--){
		solve();
	}
}
