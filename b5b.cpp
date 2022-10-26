#include<bits/stdc++.h>
using namespace std;
int a[100][100], n;
bool ok;
char c[100];
vector<vector<char>> v;
void inp(){
	cin >> n;
	for(int i = 1; i <= n; i++) for(int j = 1; j <= n; j++) cin >> a[i][j];
}
void ql(int i, int j, int k){
	if(i == n && j == n){
		vector<char>tmp(c+1, c+k);
		v.push_back(tmp);
		ok = true;
		return;
	}
	if(i+1<=n && a[i+1][j]){
		a[i+1][j] = 0;
		c[k] = 'D';
		ql(i+1, j, k+1);
		a[i+1][j] = 1;
	}
	if(j-1>=1 && a[i][j-1]){
		a[i][j-1] = 0;
		c[k] = 'L';
		ql(i, j-1, k+1);
		a[i][j-1] = 1;
	}
	if(j+1<=n && a[i][j+1]){
		a[i][j+1] = 0;
		c[k] = 'R';
		ql(i, j+1, k+1);
		a[i][j+1] = 1;
	}if(i-1>=1 && a[i-1][j]){
		a[i-1][j] = 0;
		c[k] = 'U';
		ql(i-1, j, k+1);
		a[i-1][j] = 1;
	}
}
main(){
	int t; cin >> t;
	while(t--){
		inp();
		ok = false;
		v.clear();
		
		if(a[1][1] && a[n][n]){
			a[1][1] = 0;
			ql(1, 1, 1);
		}
		if(ok){
			cout << v.size() << " ";
			for(auto x : v){
				for(char it : x) cout << it;
				cout << " ";
			}
			cout << endl;
		}
		else cout << -1 << endl;
	}
}
