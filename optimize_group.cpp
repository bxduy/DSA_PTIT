#include<bits/stdc++.h>
using namespace std;
int optimize_group(vector<float> v){
	sort(v.begin(), v.end());
	int cnt = 0, i = 0;
	while(i < v.size()){
		float l = v[i], r = l+1;
		i++;
		cnt++;
		while(i < v.size() && v[i] <= r){
			i++;
		}
	}
	return cnt;
}
main(){
	int n; cin >> n;
	vector<float> v(n);
	for(int i = 0; i < n; i++) cin >> v[i];
	cout << optimize_group(v);
}
