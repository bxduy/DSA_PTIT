#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int, int > a, pair<int , int> b){
	return a.second < b.second;
}
main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		pair<int, int> v[n];
		for(int i = 0; i < n; i++){
			cin >> v[i].first >> v[i].second;
		}
		sort(v, v+n, cmp);
		int cnt = 1, x = 0;
		for(int i = 1; i < n; i++){
			if(v[i].first >= v[x].second){
				cnt ++;
				x = i;
			}
		}
		cout << cnt << endl;
	}
}
