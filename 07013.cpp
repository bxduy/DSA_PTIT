#include<bits/stdc++.h>
using namespace std;
bool check(char c){
	if(c == '+' || c == '-' || c== '*' || c == '/') return true;
	return false;
}
void solve(){
	string s; cin >> s;
	stack<int> st;
	for(int i = 0; i < s.size(); i++){
		if(!check(s[i])) st.push(s[i] - '0');
		else{
			int s1 = st.top(); st.pop();
			int s2 = st.top(); st.pop();
			int tmp;
			switch(s[i]){
				case '-' : tmp =s2 - s1; break;
				case '+' : tmp=s1 + s2; break;
				case '*' : tmp=s1 * s2; break;
				case '/' : tmp=s2/s1; break;
			}
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
