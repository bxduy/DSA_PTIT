#include<bits/stdc++.h>
using namespace std;
main(){
	int t; cin >> t;
	while(t--){
		int n, m; cin >> n >> m;
		int a[n], b[m];
		set<int> s,ss;
		for(int &x : a){
			cin >> x;
			s.insert(x);
		}
		for(int &x : b){
			cin >> x;
			if(s.find(x) != s.end()) ss.insert(x);
			s.insert(x);
		}
		for(int x : s) cout << x << " ";
		cout << endl;
		for(int x : ss) cout << x << " ";
		 cout << endl;
	}
}
