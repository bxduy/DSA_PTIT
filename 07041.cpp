#include<bits/stdc++.h>
using namespace std;
void solve(){
	string s; cin >> s;
	int ans = 0;
	stack<char> st;
	for(int i = 0; i < s.size(); i++){
		if(s[i] == '(') st.push(s[i]);
		else{
			if(!st.empty()){
				st.pop();
				ans += 2;
			}//else st.push(s[i]);
		}
	}
	cout << ans << endl;
}
main(){
	int t; cin >> t;
	while(t--){
		solve();
	}
}
