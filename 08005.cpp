#include<bits/stdc++.h>
using namespace std;
vector<string> v;
void sl(){
	queue<string> q;
	q.push("1");
	while(v.size() < 10001){
		string s = q.front();
		v.push_back(s);
		q.push(s + "0");
		q.push(s + "1");
		q.pop();
	}
}
main(){
	sl();
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		for(int i = 0; i < n; i++) cout << v[i] << " ";
		cout << endl;
	}
}
