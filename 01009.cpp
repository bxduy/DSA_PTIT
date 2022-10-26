#include<bits/stdc++.h>
using namespace std;
int a[100], n, k;
bool ok;
void Init(){
	for(int i = 1; i <= n; i++) a[i] = 0;
}
void next(){
	int i = n;
	while(i >= 1 && a[i] == 1){
		a[i] = 0;
		i--;
	}
	if(i == 0) ok = false;
	else a[i] = 1;
}
bool check(){
	int res = 0, cnt = 0;
	for(int i = 1; i <= n; i++){
		if(a[i] == 0) cnt++;
		else cnt = 0;
		if(cnt > k) return false;
		if(cnt == k) res++;
	}
	return res == 1;
}
main(){
	cin >> n >> k;
	int ans = 0;
	Init();
	ok = true;
	vector<string> v;
	while(ok){
		if(check()){
			ans++;
			string tmp = "";
			for(int i = 1; i <= n; i++){
				if(a[i] == 0) tmp += "A";
				else tmp += "B";
			}
			v.push_back(tmp);
		}
		next();
	}
	cout << ans << endl;
	for(string x : v) cout << x << endl;
}
