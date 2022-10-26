#include<bits/stdc++.h>
using namespace std;
int n, a[100];
bool ok;
void Init(){
	for(int i = 1; i <= n; i++) a[i] = i;
}
void next(){
	int i = n-1;
	while(i >= 1 && a[i] > a[i+1]) i--;
	if(i == 0) ok = false;
	int j = n;
	while(a[i] > a[j]) j--;
	swap(a[i], a[j]);
	sort(a+i+1, a+n+1);
}
main(){
	int t; cin >> t;
	while(t--){
		cin >> n;
		Init();
		ok = true;
		vector<string> v;
		while(ok){
			string tmp = "";
			for(int i = 1; i <= n; i++) tmp += to_string(a[i]);
			v.push_back(tmp);
			next();
		}
		reverse(v.begin(), v.end());
		for(string x : v) cout << x << " ";
		cout << endl;
	}
}
