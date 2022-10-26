#include<bits/stdc++.h>
using namespace std;
main(){
	int t; cin >> t;
	stack<char> st;
	while(t--){
		string s;
		while(!st.empty())st.pop();
		while(true){
		
			cin >> s;
			for(int i = 0; i < s.size(); i++){
				st.push(s[i]);
				
			}
			while(!st.empty()){
					cout << st.top();
					st.pop();
				}
				cout << " ";
			
			
			if(getchar()=='\n') break;}
		
		while(!st.empty()) {
		cout << st.top();
		st.pop();
		}
		cout << endl;
	}
}
