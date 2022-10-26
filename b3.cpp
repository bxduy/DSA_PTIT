#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> v;
int a[1000], n, k;
bool ok;
bool kt(){
	int cnt = 0;
	if(a[0] == 0) return false;
	for(int i = 0; i < n; i++){
		if(a[i] == 2) cnt++;
	}
	return cnt > n/2;
}

void Init(){
	for(int i = 0; i < n; i++) a[i] = 0;
}
void sinh(){
	int i = n-1;
	while(i >= 0 && a[i] == 2){
		a[i] = 0;
		i--;
	}
	if(i < 0) ok = false;
	else{
		a[i] = a[i]+1;
	}
	
}
void solve(){
	for(int i = 1; i < 10; i++){
		n = i;
		ok = true;
		Init();
		while(ok){
			sinh();
			if(kt()){
				vector<int> tmp(a, a+n);
				v.push_back(tmp);
			}
		}
	}
}
main(){
	int t; cin >> t;
	solve();
	//cout << v.size();
	while(t--){
		cin >> k;
		for(int i = 0; i < k; i++){
			for(int x : v[i]){
				cout << x;
			}
			cout << " ";
		}
		cout << endl;
	}
}
