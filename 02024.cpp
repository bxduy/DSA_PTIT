#include<bits/stdc++.h>
using namespace std;
int a[50], b[50], n, k;
vector<vector<string>> v;
bool kt(){
	for(int i = 1; i < k; i++) if(b[a[i]] > b[a[i+1]]) return false;
	return true;
}
void push(){
	vector<string> tmp;
	for(int i = 1; i <= k; i++) tmp.push_back(to_string(b[a[i]]));
	v.push_back(tmp);
}
void ql(int i){
	for(int j = a[i-1]+1; j <= n-k+i; j++){
		a[i] = j;
		if(i == k){
			if(kt()) push();
		}
		else ql(i+1);
	}
}
main(){
	cin >> n;
	for(int i = 1; i <= n; i++) cin >> b[i];
	for(int i = 2; i <= n ; i++){
		k=i;
		ql(1);
	}
	sort(v.begin(), v.end());
	for(auto x : v){
		for(string i : x) cout << i << " ";
		cout << endl;
	}
}
