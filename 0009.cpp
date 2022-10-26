#include<bits/stdc++.h>
using namespace std;
bool check(char c){
	if(c == '+' || c == '-' || c== '*' || c == '/') return true;
	return false;
}
void solve(){
	string s; cin >> s;
	stack<string> st;
	for(int i = s.size()-1; i >= 0; i--){
		if(!check(s[i])) st.push(string(1, s[i]));
		else{
			string t1 = st.top(); st.pop();
			string t2 = st.top(); st.pop();
			string tmp = "("+t1+s[i]+t2+")";
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
