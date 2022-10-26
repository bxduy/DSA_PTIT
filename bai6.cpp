#include<bits/stdc++.h>
using namespace std;
vector<string> v;
int n;

void solve(){
	queue<string> q;
	string s ;
	q.push("4"); q.push("5"); //q.push("54"); q.push("55");
	while(v.size() < 10000){
		
			s = q.front();
			q.pop();
			string tmp = s;
			reverse(tmp.begin(), tmp.end());
			v.push_back(s + tmp);
			string s1 = s + "4";
			string s2 = s + "5";
			
			q.push(s1);
			q.push(s2);

	}
}
main(){
	int t; cin >> t;
	solve();
	while(t--){
		int n; cin >> n;
		for(int i = 0; i < n; i++) cout << v[i] << " ";
		cout << endl;
	}
}
