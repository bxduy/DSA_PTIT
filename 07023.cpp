#include<bits/stdc++.h>
using namespace std;
void show(stack<string> st){
	while(!st.empty()){
		cout << st.top() << " ";
		st.pop();
	}
	cout << endl;
}
main(){
	int t; cin >> t;
	cin.ignore();
	while(t--){
		string s;
		stack<string> st;
		while(true){
			cin >> s;
			
			 st.push(s);
			 if(getchar() == '\n')break;
		}
		show(st);
	}
}
