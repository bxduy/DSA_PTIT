#include<bits/stdc++.h>
using namespace std;
set<string> s;
string ss;
int n, k, a[20];
void in(){
	string str = "";
	for(int i = 1; i <= k; i++) str += ss[a[i]-1];
	s.insert(str);
}
void Try(int i){
	for(int j = a[i-1] + 1; j <= n - k + i; j++){
		a[i] = j;
		if(i == k) in();
		else Try(i+1);
	}
}
main(){
	int t; cin >> t;
	while(t--){
		s.clear();
		cin >> n;
		cin >> ss;
		for(int i = 1; i <= n; i++){
			k = i; Try(1);
		}
		for(string x : s) cout << x << " ";
		cout << endl;
	}
}
