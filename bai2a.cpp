#include<bits/stdc++.h>
using namespace std;
stack<char> st;
bool check(string s){
	for(int i = 0; i < s.size(); i++){
		if(s[i] == '(' || s[i] == '[') st.push(s[i]);
		else{
			if(s[i] == ')'){
				if(st.empty() || st.top() == '[') return false;
				if(st.top() == '(') st.pop();
			}
			if(s[i] == ']'){
				if(st.empty() || st.top() == '(') return false;
				if(st.top() == '[') st.pop();
			}
		}
	}
	return st.empty();
}
main(){
	int t; cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin, s);
		while(!st.empty()) st.pop();
		if(check(s)) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}
