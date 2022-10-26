#include<bits/stdc++.h>
using namespace std;
string str[20];

void sl(){
	int n; cin >> n;
	queue<string> q;
	q.push("6");
	q.push("8");
	vector<string> v;
	while(true){
		string s  = q.front();
		v.push_back(s);
		q.pop();
		if(s.size() < n){
		
		q.push( s + "6"); q.push(s + "8");}
		else break;
	}
	while(q.size()){
		v.push_back(q.front());
		q.pop();
	}
	cout << v.size() << endl;
	for(int i =  v.size() - 1; i >= 0; i--) cout << v[i] << " ";
	cout << endl;
}
main(){
	int t; cin >> t;
	
	while(t--){
		
		sl();
	}
}
