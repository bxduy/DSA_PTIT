#include<bits/stdc++.h>
using namespace std;
main(){
	int t, n; cin >> t;
	deque<int> q;
	while(t--){
		string s; cin >> s;
		if(s == "PUSHFRONT"){
			cin >> n;
			q.push_front(n);
		}else if(s == "PRINTFRONT"){
			if(q.size()) cout << q.front() << endl;
			else cout <<"NONE" << endl;
		}else if(s == "POPFRONT"){
			if(q.size()) q.pop_front();
		}else if(s == "PUSHBACK"){
			cin >> n;
			q.push_back(n);
		}else if(s == "PRINTBACK"){
			if(q.size()) cout << q.back() << endl;
			else cout <<"NONE" << endl;
			
		}else{
			if(q.size()) q.pop_back();
		}
	}
}
