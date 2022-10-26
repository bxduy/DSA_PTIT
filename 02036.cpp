#include<bits/stdc++.h>
using namespace std;
set<vector<int>> v;
int a[50], b[50], n, k;
bool check(){
	int sum = 0;
	for(int i = 1; i <= k; i++) sum += b[a[i]];
	return sum % 2 == 1;
}
void push(){
	vector<int> tmp;
	for(int i = 1; i <= k; i++) tmp.push_back((b[a[i]]));
	v.insert(tmp);
}
void ql(int i){
	for(int j = a[i-1] + 1; j <= n-k+i; j++){
		a[i] = j;
		if(i == k){
			if(check()) push();
		}else ql(i+1);
	}
}
main(){
	int t;
	cin >> t;
	while(t--){
		v.clear();
		cin >> n;
		for(int i = 1; i <= n; i++) cin >> b[i];
		sort(b+1, b+n+1, greater<int>());
		for(int i = 1; i <= n; i++){
			k = i;
			ql(1);
		}
		for(auto x : v){
			for(int it : x){
				cout << it << " ";
			}
			cout << endl;
		}
	}
}
