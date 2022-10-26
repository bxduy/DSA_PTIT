#include<bits/stdc++.h>
using namespace std;
main(){
	stack<int> st;
	vector<int> v;
	string s;
	//getline(cin, s);
	//string ss = s.substr(0, 3) ; cout << ss;
	while(getline(cin, s)){
		string ss = s.substr(0, 4);
		if(ss == "push"){
			//int n = stoi(s.substr(6));
			int n = 0;
			for(int i = 5; i < s.size(); i++) n = n*10 + s[i]-'0';
			st.push(n);
			v.push_back(n);
		}else if(ss == "show"){
			for(int x : v){
				cout << x << " ";
			}
			cout << endl;
		}else{
			st.pop();
			v.pop_back();
			if(st.empty()){
				cout << "empty" ;
				break;
			}
		}
	}
}
