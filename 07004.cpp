#include<bits/stdc++.h>
using namespace std;
void solve(){
	string s; cin >> s;
	stack<char> st;
	int cnt = 0;
	for(int i = 0; i < s.size(); i++){
		if(s[i] != ')') st.push(s[i]);
		else{
			if(st.size() == 0){
				st.push('('); cnt++;
			}else st.pop();
		}
	}
	cout << cnt + st.size() /2 << endl;
}
main(){
	int t; cin >> t;
	cin.ignore();
	while(t--){
		solve();
	}
}
