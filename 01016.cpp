#include<bits/stdc++.h>
using namespace std;
int a[100], n, cnt;
bool ok;
void Init(){
	cnt = 1;
	a[1] = n;
}
void next(){
	int i = cnt;
	while(i >= 1 && a[i] == 1) i--;
	if(i == 0) ok = false;
	else{
		a[i]--;
		int d = cnt - i + 1;
		cnt = i;
		int q = d / a[i];
		int r = d % a[i];
		if(q){
			for(int j = 1; j <= q; j++){
				cnt ++;
				a[cnt] = a[i];
			}
		}
		if(r){
			cnt++;
			a[cnt] = r;
		}
	}
}
main(){
	int t; cin >> t;
	while(t--){
		cin >> n;
		Init();
		ok = true;
		while(ok){
			cout << "(";
			for(int i = 1; i <= cnt; i++){
				cout << a[i];
				if(i == cnt) cout << ")";
				else cout << " ";
			}
			cout << " ";
			next();
		}
		cout << endl;
	}
}
