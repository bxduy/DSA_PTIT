#include<bits/stdc++.h>
using namespace std;
string s;
void solve(){
	cin.ignore();
	getline(cin, s);
	stack<char> st;
	for(int i = 0; i < s.size(); i++){
		if(s[i] != ')') st.push(s[i]);
		else{
			bool check = 1;
			while(!st.empty()){
				char c = st.top(); st.pop();
				if(c == '(') break;
				if(c == '+' || c== '-' || c=='*' || c == '/') check = 0;
			}
			if(check == 1){
				cout << "Yes" << endl;
				return;
			}
		}
	}
	cout << "No" << endl;
}
main(){
	int t; cin >> t; //cin.ignore();
	while(t--){
		solve();
	}
}
