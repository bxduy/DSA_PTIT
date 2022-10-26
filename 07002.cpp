#include<bits/stdc++.h>
using namespace std;
stack <int> st;
void show(){
	if(st.empty()) cout << "NONE" << endl;
	else cout << st.top();
}
main(){
	int t; cin >> t;
	while(t--){
		string s;
		int n;
		cin >> s;
		if(s == "PUSH"){
			cin >> n;
			st.push(n);
		}else if(s == "POP"){
			if(!st.empty())st.pop();
		}else show();
	}
}
