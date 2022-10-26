#include<bits/stdc++.h>
using namespace std;
void process(){
	string s, res; 
	getline(cin, s);
	stack<int> st;
	int cnt = 1;
	for(int i = 0; i < s.size(); i++){
		if(s[i] == '('){
			st.push(cnt);
			res = res + to_string(cnt) + " ";
			cnt++;
		}else if(s[i] == ')'){
			if(!st.empty()){
				res = res + to_string(st.top()) + " ";
				st.pop();
			}
		}
	}
	cout << res << endl;
}
main(){
	int t; cin >> t;
	cin.ignore();
	while(t--){
		process();
	}
}
