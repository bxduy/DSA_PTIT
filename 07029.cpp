#include<bits/stdc++.h>
using namespace std;
void solve(){
	string s; cin >> s;
	stack<char> st;
	for(int i = 0; i < s.size(); i++){
		if(s[i] == ']'){
			string tmp = "";
			while(!st.empty() && st.top() != '['){
				tmp = st.top() + tmp;
				st.pop();
			}
		
			st.pop();
			string num;
			while(!st.empty() && isdigit(st.top())){
				num = st.top() + num;
				st.pop();
			}
			int n = stoi(num);
			string repeat = "";
			for(int j = 0; j < n; j++){
				repeat += tmp;
			}
			for(char c : repeat){
				st.push(c);
			}
		}
		else st.push(s[i]);
	}
	string ans= "";
	while(!st.empty()){
		ans = st.top() + ans;
		st.pop();
	}
	cout << ans << endl;
}
main(){
	int t; cin >> t;
	while(t--){
		solve();
	}
}
