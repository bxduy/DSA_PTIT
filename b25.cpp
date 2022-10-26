#include<bits/stdc++.h>
using namespace std;
main(){
	int t; cin >> t;
	while(t--){
		int n, k; cin >> n >> k;
		multiset<int> s;
		int a[n];for(int &x : a) cin >> x;
		for(int i = 0; i < k; i++) s.insert(a[i]);
		cout << *s.rbegin() ;
		for(int i = k; i < n; i++){
			s.erase(s.find(a[i-k]));
			s.insert(a[i]);
			cout << " " << *s.rbegin();
		}
		cout << endl;
	}
}
