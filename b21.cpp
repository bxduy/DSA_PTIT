#include<bits/stdc++.h>
using namespace std;
int a[100], n;
vector<vector<char>> v;
void push(){
	vector<char> tmp;
	for(int i = 0; i < n; i++) tmp.push_back((char)(a[i] + 65));
	v.push_back(tmp); 
}
void ql(int i){
	for(int j = 0; j < 2; j++){
		a[i] = j;
		if(i == n-1) push();
		else ql(i+1);
	}
}
main(){
	int t; cin >> t;
	while(t--){
		cin >> n;
		v.clear();
		ql(0);
		for(int i = 0; i < v.size(); i++){
			for(char it : v[i]) cout << it;
			cout << (i == v.size() - 1? "":",");
		}
		cout << endl;
	}
}
