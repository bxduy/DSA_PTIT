#include<bits/stdc++.h>
using namespace std;
main(){
	int t, n; cin >> t;
	queue<int> q;
	while(t--){
		string s; cin >> s;
		if(s == "PUSH"){
			cin >> n; q.push(n);
		}else if(s == "POP"){
			if(q.size()) q.pop();
		}else{
			if(q.size()) cout << q.front() << endl;
			else cout <<"NONE" << endl;
		}
	}
}
