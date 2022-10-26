#include<bits/stdc++.h>
using namespace std;
int x;
bool cmp(pair<int, int> a, pair<int, int> b){
	if(abs(a.first-x) != abs(b.first-x)) return abs(a.first-x) < abs(b.first-x);
	return a.second < b.second;
}
main(){
	int t, n; cin >> t;
	while(t--){
		cin >> n >> x;
		pair<int, int> v[n];
		for(int  i = 0; i < n; i++) {
			cin >> v[i].first;
			v[i].second = i;
		}
		stable_sort(v, v+n, cmp);
		for(int i = 0; i < n; i++) cout << v[i].first << " " ;
		cout << endl;
	}
}
