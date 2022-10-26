#include<bits/stdc++.h>
using namespace std;
int a[50], n, k;
vector<vector<int>> v;
void inp(){
	cin >> n >> k;
}
void ql(int i){
	for(int j = a[i-1] + 1; j <= n-k+i; j++){
		a[i] = j;
		if(i == k){
			vector<int> tmp(a+1, a+k+1);
			v.push_back(tmp);
		}else ql(i+1);
	}
}
main(){
	int t; cin >> t;
	while(t--){
		inp();
		v.clear();
		ql(1);
		reverse(v.begin(), v.end());
		for(auto x : v){
			for(int it : x){
				cout << it << " ";
			}cout << endl;
		}
	}
}
