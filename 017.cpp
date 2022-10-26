#include<bits/stdc++.h>
using namespace std;
main(){
	int t; cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;
		int a[n], b[m];
		multiset<int> s;
		for(int &x : a){
			cin >> x;
			s.insert(x);
		}
		for(int &x : b){
			cin >> x;
			s.insert(x);
		}
		for(int x : s) cout << x << " ";
		cout << endl;
	}
}
