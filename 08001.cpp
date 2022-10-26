#include<bits/stdc++.h>
using namespace std;
main(){
	int t; cin >> t;
	while(t--){
		queue<int> q;
		int ask, n; cin >> n;
		while(n--){
			cin >> ask;
			switch(ask){
				case 1 : cout << q.size() << endl; break;
				case 2 : if(q.size()) cout << "NO" << endl;
				else cout << "YES" << endl; break;
				case 3 : int x ; cin >> x; q.push(x); break;
				case 4 : if(q.size()) q.pop(); break;
				case 5 : if(q.size()) cout << q.front() << endl;
				else cout << -1 << endl; break;
				case 6 : if(q.size()) cout << q.back() << endl;
				else cout << -1 << endl; break;
			}
		}
	}
}
