#include<bits/stdc++.h>
using namespace std;
int a[30],  n;
vector<vector<int>>v;

void in(){
	vector<int>tmp(a+1,a+n+1);
	v.push_back(tmp);
}
void ql(int i){
	for(int j = 0; j <= 1; j++){
		a[i] = j;
		if(i == n) in();
		else ql(i+1);
	}
}
main(){
	int t; cin >> t;
	while(t--){
		v.clear();
		cin >> n;
		ql(1);
		cout << v.size() << endl;
		for(int i = 0; i < v.size(); i++){
			for(int j = 0; j < v[i].size(); j++){
				if(v[i][j] == 0) cout << 6;
				else cout << 8;
			}
			if(i != v.size()-1) cout << " ";
		}
		cout << endl;
	}
}
