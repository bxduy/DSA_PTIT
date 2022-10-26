#include<bits/stdc++.h>
using namespace std;
int x[20], check[20], n, sum, a[20][20];
vector<vector<int>> v; 
void inp(){
	cin >> n >> sum;
	for(int i = 1; i <= n; i++) for(int j = 1; j <= n; j++) cin >> a[i][j];
	
}
bool check1(){
	int s = 0;
	for(int i = 1; i <= n; i++) s+= a[i][x[i]];
	return s == sum;
}
void push(){
	vector<int> tmp(x+1, x+n+1);
	v.push_back(tmp);
}
void Try(int i){
	for(int j = 1; j <= n; j++){
		if(!check[j]){
			x[i] = j;
			check[j] = 1;
			if(i == n){
				if(check1()) push();
			}else Try(i+1);
			check[j] = 0;
		}
	}
}
main(){
	inp();
	memset(check, 0, sizeof(check));
	Try(1);
	cout << v.size() << endl;
	for(auto x : v){
		for(int it : x) cout << it << " ";
		cout << endl;
	}
}
